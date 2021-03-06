#include <biogears/cdm/engine/PhysiologyEngineTrack.h>
#include <biogears/cdm/utils/Logger.h>
#include <biogears/cdm/engine/PhysiologyEngine.h>
#include <pybind11/pybind11.h>
#include <biogears/cdm/utils/DataTrack.h>
#include <biogears/cdm/patient/SEPatient.h>
#include <biogears/cdm/substance/SESubstanceManager.h>
#include <biogears/cdm/scenario/requests/SEDataRequestManager.h>
#include <biogears/cdm/compartment/SECompartmentManager.h>
namespace py = pybind11;




PYBIND11_MODULE(pybPhysiologyEngineTrack, m) {


    py::class_<biogears::PhysiologyEngineTrack>(m, "PhysiologyEngineTrack")
    .def(py::init<biogears::PhysiologyEngine&>())
    .def(py::init<biogears::SEPatient&, biogears::SESubstanceManager&, biogears::SECompartmentManager&, const std::vector<biogears::SESystem*>&, const std::vector<biogears::SESystem*>&>())
  //  .def(py::init<biogears::PhysiologyEngineTrack&>())
    .def("Clear",&biogears::PhysiologyEngineTrack::Clear)
    .def("GetDataTrack",&biogears::PhysiologyEngineTrack::GetDataTrack)
    .def("GetDataRequestManager",&biogears::PhysiologyEngineTrack::GetDataRequestManager,py::return_value_policy::reference)
    .def("ResetFile",&biogears::PhysiologyEngineTrack::ResetFile)
    .def("ConnectRequest",&biogears::PhysiologyEngineTrack::ConnectRequest)
    .def("TrackData",&biogears::PhysiologyEngineTrack::TrackData)
    .def("PullData",&biogears::PhysiologyEngineTrack::PullData)
    .def("TrackRequest",&biogears::PhysiologyEngineTrack::TrackRequest)
    .def("ForceConnection",&biogears::PhysiologyEngineTrack::ForceConnection);

 
#ifdef VERSION_INFO
    m.attr("__version__") = VERSION_INFO;
#else
    m.attr("__version__") = "dev";
#endif
}