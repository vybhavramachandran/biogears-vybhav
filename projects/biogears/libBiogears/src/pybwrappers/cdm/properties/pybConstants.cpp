
#include <biogears/cdm/properties/SEScalar.h>
#include <biogears/cdm/properties/SEScalar0To1.h>
#include <biogears/cdm/properties/SEScalarVolume.h>
#include <biogears/cdm/properties/SEScalarPressurePerVolume.h>
#include <biogears/cdm/properties/SEScalarAmountPerVolume.h>
#include <biogears/cdm/properties/SEScalarOsmolarity.h>
#include <biogears/cdm/properties/SEScalarAmount.h>
#include <biogears/cdm/properties/SEScalarFlowInertance.h>
#include <biogears/cdm/properties/SEScalarInverseVolume.h>
#include <biogears/cdm/properties/SEScalarPressureTimePerArea.h>
#include <biogears/cdm/properties/SEScalarTime.h>
#include <biogears/cdm/properties/SEScalarVolumePerTime.h>
#include <biogears/cdm/properties/SEScalarLength.h>
#include <biogears/cdm/properties/SEScalarMass.h>
#include <biogears/cdm/properties/SEScalarPower.h>
#include <biogears/cdm/properties/SEScalarHeatCapacitancePerMass.h>
#include <biogears/cdm/properties/SEScalarTemperature.h>
#include <biogears/cdm/properties/SEScalarHeatResistanceArea.h>
#include <biogears/cdm/properties/SEScalarEnergy.h>
#include <biogears/cdm/properties/SEScalarHeatConductance.h>
#include <biogears/cdm/properties/SEScalarVolumePerTimePressureArea.h>
#include <biogears/cdm/properties/SEScalarElectricCharge.h>
#include <biogears/cdm/properties/SEScalarElectricCurrent.h>
#include <biogears/cdm/properties/SEScalarMassPerTime.h>
#include <biogears/cdm/properties/SEScalarElectricPotential.h>
#include <biogears/cdm/properties/SEScalarVolumePerTimeMass.h>
#include <biogears/cdm/properties/SEScalarLengthPerTimePressure.h>
#include <biogears/cdm/properties/SEScalarMassPerMass.h>
#include <biogears/cdm/properties/SEScalarPowerPerAreaTemperatureToTheFourth.h>
#include <biogears/cdm/properties/SEScalarOsmolality.h>
#include <biogears/cdm/properties/SEScalarFlowCompliance.h>
#include <biogears/cdm/properties/SEScalarHeatResistance.h>
#include <biogears/cdm/properties/SEScalarHeatCapacitancePerAmount.h>
#include <biogears/cdm/properties/SEScalarHeatConductancePerArea.h>
#include <biogears/cdm/properties/SEScalarElectricInductance.h>
#include <biogears/cdm/properties/SEScalarArea.h>
#include <biogears/cdm/properties/SEScalarAmountPerMass.h>
#include <biogears/cdm/properties/SEScalarVolumePerTimeArea.h>
#include <biogears/cdm/properties/SEScalarEnergyPerAmount.h>
#include <biogears/cdm/properties/SEScalarPressureTimePerVolumeArea.h>
#include <biogears/cdm/properties/SEScalarPressure.h>
#include <biogears/cdm/properties/SEScalarHeatInductance.h>
#include <biogears/cdm/properties/SEScalarTimeMassPerVolume.h>
#include <biogears/cdm/properties/SEScalarFrequency.h>
#include <biogears/cdm/properties/SEScalarLengthPerTime.h>
#include <biogears/cdm/properties/SEScalarElectricCapacitance.h>
#include <biogears/cdm/properties/SEScalarInversePressure.h>
#include <biogears/cdm/properties/SEScalarMassPerAreaTime.h>
#include <biogears/cdm/properties/SEScalarFlowElastance.h>
#include <biogears/cdm/properties/SEScalarFlowResistance.h>
#include <biogears/cdm/properties/SEScalarVolumePerTimePressure.h>
#include <biogears/cdm/properties/SEScalarMassPerAmount.h>
#include <biogears/cdm/properties/SEScalarAreaPerTimePressure.h>
#include <biogears/cdm/properties/SEScalarHeatCapacitance.h>
#include <biogears/cdm/properties/SEScalarAmountPerTime.h>
#include <biogears/cdm/properties/SEScalarEnergyPerMass.h>
#include <biogears/cdm/properties/SEScalarElectricResistance.h>
#include <biogears/cdm/properties/SEScalarMassPerVolume.h>
#include <biogears/cdm/properties/SEScalarForce.h>
#include <biogears/cdm/properties/SEScalarVolumePerPressure.h>


#include <biogears/schema/cdm/Properties.hxx>
#include <pybind11/pybind11.h>

namespace py = pybind11;

PYBIND11_MODULE(pybConstants, m)
{

 py::class_<biogears::VolumeUnit>(m, "VolumeUnit")
.def_readonly_static("L",&biogears::VolumeUnit::L)
.def_readonly_static("dL",&biogears::VolumeUnit::dL)
.def_readonly_static("mL",&biogears::VolumeUnit::mL)
.def_readonly_static("uL",&biogears::VolumeUnit::uL)
.def_readonly_static("m3",&biogears::VolumeUnit::m3)
;
py::class_<biogears::PressurePerVolumeUnit>(m, "PressurePerVolumeUnit")
.def_readonly_static("mmHg_Per_mL",&biogears::PressurePerVolumeUnit::mmHg_Per_mL)
.def_readonly_static("cmH2O_Per_mL",&biogears::PressurePerVolumeUnit::cmH2O_Per_mL)
;
py::class_<biogears::AmountPerVolumeUnit>(m, "AmountPerVolumeUnit")
.def_readonly_static("mol_Per_L",&biogears::AmountPerVolumeUnit::mol_Per_L)
.def_readonly_static("mol_Per_mL",&biogears::AmountPerVolumeUnit::mol_Per_mL)
.def_readonly_static("mmol_Per_L",&biogears::AmountPerVolumeUnit::mmol_Per_L)
.def_readonly_static("mmol_Per_mL",&biogears::AmountPerVolumeUnit::mmol_Per_mL)
.def_readonly_static("ct_Per_L",&biogears::AmountPerVolumeUnit::ct_Per_L)
.def_readonly_static("ct_Per_uL",&biogears::AmountPerVolumeUnit::ct_Per_uL)
;
py::class_<biogears::OsmolarityUnit>(m, "OsmolarityUnit")
.def_readonly_static("Osm_Per_L",&biogears::OsmolarityUnit::Osm_Per_L)
.def_readonly_static("mOsm_Per_L",&biogears::OsmolarityUnit::mOsm_Per_L)
;
py::class_<biogears::AmountUnit>(m, "AmountUnit")
.def_readonly_static("mol",&biogears::AmountUnit::mol)
.def_readonly_static("pmol",&biogears::AmountUnit::pmol)
;
py::class_<biogears::FlowInertanceUnit>(m, "FlowInertanceUnit")
.def_readonly_static("mmHg_s2_Per_mL",&biogears::FlowInertanceUnit::mmHg_s2_Per_mL)
.def_readonly_static("mmHg_s2_Per_L",&biogears::FlowInertanceUnit::mmHg_s2_Per_L)
.def_readonly_static("cmH2O_s2_Per_mL",&biogears::FlowInertanceUnit::cmH2O_s2_Per_mL)
.def_readonly_static("cmH2O_s2_Per_L",&biogears::FlowInertanceUnit::cmH2O_s2_Per_L)
.def_readonly_static("Pa_s2_Per_m3",&biogears::FlowInertanceUnit::Pa_s2_Per_m3)
;
py::class_<biogears::InverseVolumeUnit>(m, "InverseVolumeUnit")
.def_readonly_static("Inverse_L",&biogears::InverseVolumeUnit::Inverse_L)
.def_readonly_static("Inverse_mL",&biogears::InverseVolumeUnit::Inverse_mL)
;
py::class_<biogears::PressureTimePerAreaUnit>(m, "PressureTimePerAreaUnit")
.def_readonly_static("mmHg_Per_mL_m2",&biogears::PressureTimePerAreaUnit::mmHg_Per_mL_m2)
.def_readonly_static("cmH2O_Per_mL_m2",&biogears::PressureTimePerAreaUnit::cmH2O_Per_mL_m2)
;
py::class_<biogears::TimeUnit>(m, "TimeUnit",py::module_local())
.def_readonly_static("s",&biogears::TimeUnit::s)
.def_readonly_static("min",&biogears::TimeUnit::min)
.def_readonly_static("hr",&biogears::TimeUnit::hr)
.def_readonly_static("day",&biogears::TimeUnit::day)
.def_readonly_static("yr",&biogears::TimeUnit::yr)
;
py::class_<biogears::VolumePerTimeUnit>(m, "VolumePerTimeUnit")
.def_readonly_static("L_Per_s",&biogears::VolumePerTimeUnit::L_Per_s)
.def_readonly_static("mL_Per_s",&biogears::VolumePerTimeUnit::mL_Per_s)
.def_readonly_static("mL_Per_day",&biogears::VolumePerTimeUnit::mL_Per_day)
.def_readonly_static("L_Per_day",&biogears::VolumePerTimeUnit::L_Per_day)
.def_readonly_static("L_Per_min",&biogears::VolumePerTimeUnit::L_Per_min)
.def_readonly_static("m3_Per_s",&biogears::VolumePerTimeUnit::m3_Per_s)
.def_readonly_static("mL_Per_min",&biogears::VolumePerTimeUnit::mL_Per_min)
.def_readonly_static("mL_Per_hr",&biogears::VolumePerTimeUnit::mL_Per_hr)
;
py::class_<biogears::LengthUnit>(m, "LengthUnit")
.def_readonly_static("m",&biogears::LengthUnit::m)
.def_readonly_static("cm",&biogears::LengthUnit::cm)
.def_readonly_static("mm",&biogears::LengthUnit::mm)
.def_readonly_static("um",&biogears::LengthUnit::um)
.def_readonly_static("in",&biogears::LengthUnit::in)
.def_readonly_static("ft",&biogears::LengthUnit::ft)
;
py::class_<biogears::MassUnit>(m, "MassUnit")
.def_readonly_static("g",&biogears::MassUnit::g)
.def_readonly_static("ug",&biogears::MassUnit::ug)
.def_readonly_static("mg",&biogears::MassUnit::mg)
.def_readonly_static("kg",&biogears::MassUnit::kg)
.def_readonly_static("lb",&biogears::MassUnit::lb)
;
py::class_<biogears::PowerUnit>(m, "PowerUnit")
.def_readonly_static("W",&biogears::PowerUnit::W)
.def_readonly_static("kcal_Per_s",&biogears::PowerUnit::kcal_Per_s)
.def_readonly_static("kcal_Per_hr",&biogears::PowerUnit::kcal_Per_hr)
.def_readonly_static("kcal_Per_day",&biogears::PowerUnit::kcal_Per_day)
.def_readonly_static("J_Per_s",&biogears::PowerUnit::J_Per_s)
.def_readonly_static("BTU_Per_hr",&biogears::PowerUnit::BTU_Per_hr)
;
py::class_<biogears::HeatCapacitancePerMassUnit>(m, "HeatCapacitancePerMassUnit")
.def_readonly_static("J_Per_K_kg",&biogears::HeatCapacitancePerMassUnit::J_Per_K_kg)
.def_readonly_static("kJ_Per_K_kg",&biogears::HeatCapacitancePerMassUnit::kJ_Per_K_kg)
.def_readonly_static("kcal_Per_K_kg",&biogears::HeatCapacitancePerMassUnit::kcal_Per_K_kg)
.def_readonly_static("kcal_Per_C_kg",&biogears::HeatCapacitancePerMassUnit::kcal_Per_C_kg)
;
py::class_<biogears::TemperatureUnit>(m, "TemperatureUnit")
.def_readonly_static("F",&biogears::TemperatureUnit::F)
.def_readonly_static("C",&biogears::TemperatureUnit::C)
.def_readonly_static("K",&biogears::TemperatureUnit::K)
.def_readonly_static("R",&biogears::TemperatureUnit::R)
;
py::class_<biogears::HeatResistanceAreaUnit>(m, "HeatResistanceAreaUnit")
.def_readonly_static("rsi",&biogears::HeatResistanceAreaUnit::rsi)
.def_readonly_static("clo",&biogears::HeatResistanceAreaUnit::clo)
.def_readonly_static("rValue",&biogears::HeatResistanceAreaUnit::rValue)
.def_readonly_static("tog",&biogears::HeatResistanceAreaUnit::tog)
;
py::class_<biogears::EnergyUnit>(m, "EnergyUnit")
.def_readonly_static("J",&biogears::EnergyUnit::J)
.def_readonly_static("mJ",&biogears::EnergyUnit::mJ)
.def_readonly_static("kJ",&biogears::EnergyUnit::kJ)
.def_readonly_static("kcal",&biogears::EnergyUnit::kcal)
;
py::class_<biogears::HeatConductanceUnit>(m, "HeatConductanceUnit")
.def_readonly_static("W_Per_K",&biogears::HeatConductanceUnit::W_Per_K)
.def_readonly_static("W_Per_C",&biogears::HeatConductanceUnit::W_Per_C)
.def_readonly_static("kcal_Per_K_s",&biogears::HeatConductanceUnit::kcal_Per_K_s)
.def_readonly_static("kcal_Per_C_s",&biogears::HeatConductanceUnit::kcal_Per_C_s)
;
py::class_<biogears::VolumePerTimePressureAreaUnit>(m, "VolumePerTimePressureAreaUnit")
.def_readonly_static("mL_Per_min_mmHg_m2",&biogears::VolumePerTimePressureAreaUnit::mL_Per_min_mmHg_m2)
.def_readonly_static("mL_Per_s_mmHg_m2",&biogears::VolumePerTimePressureAreaUnit::mL_Per_s_mmHg_m2)
;
py::class_<biogears::ElectricChargeUnit>(m, "ElectricChargeUnit")
.def_readonly_static("C",&biogears::ElectricChargeUnit::C)
;
py::class_<biogears::ElectricCurrentUnit>(m, "ElectricCurrentUnit")
.def_readonly_static("A",&biogears::ElectricCurrentUnit::A)
;
py::class_<biogears::MassPerTimeUnit>(m, "MassPerTimeUnit")
.def_readonly_static("g_Per_s",&biogears::MassPerTimeUnit::g_Per_s)
.def_readonly_static("g_Per_min",&biogears::MassPerTimeUnit::g_Per_min)
.def_readonly_static("g_Per_day",&biogears::MassPerTimeUnit::g_Per_day)
.def_readonly_static("mg_Per_s",&biogears::MassPerTimeUnit::mg_Per_s)
.def_readonly_static("mg_Per_min",&biogears::MassPerTimeUnit::mg_Per_min)
.def_readonly_static("ug_Per_s",&biogears::MassPerTimeUnit::ug_Per_s)
.def_readonly_static("kg_Per_s",&biogears::MassPerTimeUnit::kg_Per_s)
.def_readonly_static("ug_Per_min",&biogears::MassPerTimeUnit::ug_Per_min)
;
py::class_<biogears::ElectricPotentialUnit>(m, "ElectricPotentialUnit")
.def_readonly_static("V",&biogears::ElectricPotentialUnit::V)
.def_readonly_static("mV",&biogears::ElectricPotentialUnit::mV)
;
py::class_<biogears::VolumePerTimeMassUnit>(m, "VolumePerTimeMassUnit")
.def_readonly_static("L_Per_s_g",&biogears::VolumePerTimeMassUnit::L_Per_s_g)
.def_readonly_static("mL_Per_s_g",&biogears::VolumePerTimeMassUnit::mL_Per_s_g)
.def_readonly_static("mL_Per_min_kg",&biogears::VolumePerTimeMassUnit::mL_Per_min_kg)
.def_readonly_static("mL_Per_s_kg",&biogears::VolumePerTimeMassUnit::mL_Per_s_kg)
.def_readonly_static("uL_Per_min_kg",&biogears::VolumePerTimeMassUnit::uL_Per_min_kg)
;
py::class_<biogears::LengthPerTimePressureUnit>(m, "LengthPerTimePressureUnit")
.def_readonly_static("m_Per_s_mmHg",&biogears::LengthPerTimePressureUnit::m_Per_s_mmHg)
.def_readonly_static("cm_Per_s_mmHg",&biogears::LengthPerTimePressureUnit::cm_Per_s_mmHg)
.def_readonly_static("m_Per_min_mmHg",&biogears::LengthPerTimePressureUnit::m_Per_min_mmHg)
.def_readonly_static("cm_Per_min_mmHg",&biogears::LengthPerTimePressureUnit::cm_Per_min_mmHg)
;
py::class_<biogears::MassPerMassUnit>(m, "MassPerMassUnit")
.def_readonly_static("ug_Per_kg",&biogears::MassPerMassUnit::ug_Per_kg)
.def_readonly_static("mg_Per_g",&biogears::MassPerMassUnit::mg_Per_g)
;
py::class_<biogears::PowerPerAreaTemperatureToTheFourthUnit>(m, "PowerPerAreaTemperatureToTheFourthUnit")
.def_readonly_static("W_Per_m2_K4",&biogears::PowerPerAreaTemperatureToTheFourthUnit::W_Per_m2_K4)
;
py::class_<biogears::OsmolalityUnit>(m, "OsmolalityUnit")
.def_readonly_static("Osm_Per_kg",&biogears::OsmolalityUnit::Osm_Per_kg)
.def_readonly_static("mOsm_Per_kg",&biogears::OsmolalityUnit::mOsm_Per_kg)
;
py::class_<biogears::FlowComplianceUnit>(m, "FlowComplianceUnit")
.def_readonly_static("L_Per_cmH2O",&biogears::FlowComplianceUnit::L_Per_cmH2O)
.def_readonly_static("mL_Per_mmHg",&biogears::FlowComplianceUnit::mL_Per_mmHg)
.def_readonly_static("mL_Per_cmH2O",&biogears::FlowComplianceUnit::mL_Per_cmH2O)
.def_readonly_static("m3_Per_Pa",&biogears::FlowComplianceUnit::m3_Per_Pa)
;
py::class_<biogears::HeatResistanceUnit>(m, "HeatResistanceUnit")
.def_readonly_static("K_Per_W",&biogears::HeatResistanceUnit::K_Per_W)
.def_readonly_static("C_Per_W",&biogears::HeatResistanceUnit::C_Per_W)
.def_readonly_static("K_s_Per_kcal",&biogears::HeatResistanceUnit::K_s_Per_kcal)
.def_readonly_static("C_s_Per_kcal",&biogears::HeatResistanceUnit::C_s_Per_kcal)
;
py::class_<biogears::HeatCapacitancePerAmountUnit>(m, "HeatCapacitancePerAmountUnit")
.def_readonly_static("J_Per_K_mol",&biogears::HeatCapacitancePerAmountUnit::J_Per_K_mol)
;
py::class_<biogears::HeatConductancePerAreaUnit>(m, "HeatConductancePerAreaUnit")
.def_readonly_static("W_Per_m2_K",&biogears::HeatConductancePerAreaUnit::W_Per_m2_K)
.def_readonly_static("W_Per_m2_C",&biogears::HeatConductancePerAreaUnit::W_Per_m2_C)
.def_readonly_static("BTU_Per_hr_ft2_C",&biogears::HeatConductancePerAreaUnit::BTU_Per_hr_ft2_C)
;
py::class_<biogears::ElectricInductanceUnit>(m, "ElectricInductanceUnit")
.def_readonly_static("H",&biogears::ElectricInductanceUnit::H)
;
py::class_<biogears::AreaUnit>(m, "AreaUnit")
.def_readonly_static("cm2",&biogears::AreaUnit::cm2)
.def_readonly_static("m2",&biogears::AreaUnit::m2)
;
py::class_<biogears::AmountPerMassUnit>(m, "AmountPerMassUnit")
.def_readonly_static("ct_Per_g",&biogears::AmountPerMassUnit::ct_Per_g)
.def_readonly_static("ct_Per_ug",&biogears::AmountPerMassUnit::ct_Per_ug)
;
py::class_<biogears::VolumePerTimeAreaUnit>(m, "VolumePerTimeAreaUnit")
.def_readonly_static("mL_Per_min_m2",&biogears::VolumePerTimeAreaUnit::mL_Per_min_m2)
.def_readonly_static("mL_Per_s_m2",&biogears::VolumePerTimeAreaUnit::mL_Per_s_m2)
.def_readonly_static("L_Per_min_m2",&biogears::VolumePerTimeAreaUnit::L_Per_min_m2)
;
py::class_<biogears::EnergyPerAmountUnit>(m, "EnergyPerAmountUnit")
.def_readonly_static("kcal_Per_mol",&biogears::EnergyPerAmountUnit::kcal_Per_mol)
.def_readonly_static("kJ_Per_mol",&biogears::EnergyPerAmountUnit::kJ_Per_mol)
;
py::class_<biogears::PressureTimePerVolumeAreaUnit>(m, "PressureTimePerVolumeAreaUnit")
.def_readonly_static("mmHg_min_Per_mL_m2",&biogears::PressureTimePerVolumeAreaUnit::mmHg_min_Per_mL_m2)
.def_readonly_static("mmHg_s_Per_mL_m2",&biogears::PressureTimePerVolumeAreaUnit::mmHg_s_Per_mL_m2)
.def_readonly_static("dyn_s_Per_cm5_m2",&biogears::PressureTimePerVolumeAreaUnit::dyn_s_Per_cm5_m2)
;
py::class_<biogears::PressureUnit>(m, "PressureUnit")
.def_readonly_static("Pa",&biogears::PressureUnit::Pa)
.def_readonly_static("mmHg",&biogears::PressureUnit::mmHg)
.def_readonly_static("cmH2O",&biogears::PressureUnit::cmH2O)
.def_readonly_static("psi",&biogears::PressureUnit::psi)
.def_readonly_static("atm",&biogears::PressureUnit::atm)
;
py::class_<biogears::HeatInductanceUnit>(m, "HeatInductanceUnit")
.def_readonly_static("K_s_Per_W",&biogears::HeatInductanceUnit::K_s_Per_W)
;
py::class_<biogears::TimeMassPerVolumeUnit>(m, "TimeMassPerVolumeUnit")
.def_readonly_static("s_g_Per_L",&biogears::TimeMassPerVolumeUnit::s_g_Per_L)
.def_readonly_static("min_g_Per_L",&biogears::TimeMassPerVolumeUnit::min_g_Per_L)
.def_readonly_static("hr_g_Per_L",&biogears::TimeMassPerVolumeUnit::hr_g_Per_L)
.def_readonly_static("s_ug_Per_mL",&biogears::TimeMassPerVolumeUnit::s_ug_Per_mL)
.def_readonly_static("min_ug_Per_mL",&biogears::TimeMassPerVolumeUnit::min_ug_Per_mL)
.def_readonly_static("hr_ug_Per_mL",&biogears::TimeMassPerVolumeUnit::hr_ug_Per_mL)
;
py::class_<biogears::FrequencyUnit>(m, "FrequencyUnit")
.def_readonly_static("Per_min",&biogears::FrequencyUnit::Per_min)
.def_readonly_static("Per_s",&biogears::FrequencyUnit::Per_s)
.def_readonly_static("Hz",&biogears::FrequencyUnit::Hz)
.def_readonly_static("Per_hr",&biogears::FrequencyUnit::Per_hr)
;
py::class_<biogears::LengthPerTimeUnit>(m, "LengthPerTimeUnit")
.def_readonly_static("m_Per_s",&biogears::LengthPerTimeUnit::m_Per_s)
.def_readonly_static("cm_Per_s",&biogears::LengthPerTimeUnit::cm_Per_s)
.def_readonly_static("m_Per_min",&biogears::LengthPerTimeUnit::m_Per_min)
.def_readonly_static("cm_Per_min",&biogears::LengthPerTimeUnit::cm_Per_min)
.def_readonly_static("ft_Per_s",&biogears::LengthPerTimeUnit::ft_Per_s)
.def_readonly_static("ft_Per_min",&biogears::LengthPerTimeUnit::ft_Per_min)
;
py::class_<biogears::ElectricCapacitanceUnit>(m, "ElectricCapacitanceUnit")
.def_readonly_static("F",&biogears::ElectricCapacitanceUnit::F)
;
py::class_<biogears::InversePressureUnit>(m, "InversePressureUnit")
.def_readonly_static("Inverse_Pa",&biogears::InversePressureUnit::Inverse_Pa)
.def_readonly_static("Inverse_mmHg",&biogears::InversePressureUnit::Inverse_mmHg)
.def_readonly_static("Inverse_cmH2O",&biogears::InversePressureUnit::Inverse_cmH2O)
.def_readonly_static("Inverse_atm",&biogears::InversePressureUnit::Inverse_atm)
;
py::class_<biogears::MassPerAreaTimeUnit>(m, "MassPerAreaTimeUnit")
.def_readonly_static("g_Per_cm2_s",&biogears::MassPerAreaTimeUnit::g_Per_cm2_s)
;
py::class_<biogears::FlowElastanceUnit>(m, "FlowElastanceUnit")
.def_readonly_static("cmH2O_Per_L",&biogears::FlowElastanceUnit::cmH2O_Per_L)
.def_readonly_static("mmHg_Per_mL",&biogears::FlowElastanceUnit::mmHg_Per_mL)
.def_readonly_static("Pa_Per_m3",&biogears::FlowElastanceUnit::Pa_Per_m3)
;
py::class_<biogears::FlowResistanceUnit>(m, "FlowResistanceUnit")
.def_readonly_static("cmH2O_s_Per_L",&biogears::FlowResistanceUnit::cmH2O_s_Per_L)
.def_readonly_static("mmHg_s_Per_mL",&biogears::FlowResistanceUnit::mmHg_s_Per_mL)
.def_readonly_static("mmHg_min_Per_mL",&biogears::FlowResistanceUnit::mmHg_min_Per_mL)
.def_readonly_static("mmHg_min_Per_L",&biogears::FlowResistanceUnit::mmHg_min_Per_L)
.def_readonly_static("Pa_s_Per_m3",&biogears::FlowResistanceUnit::Pa_s_Per_m3)
;
py::class_<biogears::VolumePerTimePressureUnit>(m, "VolumePerTimePressureUnit")
.def_readonly_static("L_Per_s_mmHg",&biogears::VolumePerTimePressureUnit::L_Per_s_mmHg)
.def_readonly_static("mL_Per_s_mmHg",&biogears::VolumePerTimePressureUnit::mL_Per_s_mmHg)
.def_readonly_static("L_Per_min_mmHg",&biogears::VolumePerTimePressureUnit::L_Per_min_mmHg)
.def_readonly_static("mL_Per_min_mmHg",&biogears::VolumePerTimePressureUnit::mL_Per_min_mmHg)
;
py::class_<biogears::MassPerAmountUnit>(m, "MassPerAmountUnit")
.def_readonly_static("g_Per_ct",&biogears::MassPerAmountUnit::g_Per_ct)
.def_readonly_static("g_Per_mol",&biogears::MassPerAmountUnit::g_Per_mol)
.def_readonly_static("g_Per_mmol",&biogears::MassPerAmountUnit::g_Per_mmol)
.def_readonly_static("g_Per_umol",&biogears::MassPerAmountUnit::g_Per_umol)
.def_readonly_static("mg_Per_mol",&biogears::MassPerAmountUnit::mg_Per_mol)
.def_readonly_static("mg_Per_mmol",&biogears::MassPerAmountUnit::mg_Per_mmol)
.def_readonly_static("kg_Per_mol",&biogears::MassPerAmountUnit::kg_Per_mol)
.def_readonly_static("ug_Per_mmol",&biogears::MassPerAmountUnit::ug_Per_mmol)
.def_readonly_static("ug_Per_mol",&biogears::MassPerAmountUnit::ug_Per_mol)
.def_readonly_static("ug_Per_ct",&biogears::MassPerAmountUnit::ug_Per_ct)
.def_readonly_static("pg_Per_ct",&biogears::MassPerAmountUnit::pg_Per_ct)
;
py::class_<biogears::AreaPerTimePressureUnit>(m, "AreaPerTimePressureUnit")
.def_readonly_static("m2_Per_s_mmHg",&biogears::AreaPerTimePressureUnit::m2_Per_s_mmHg)
.def_readonly_static("cm2_Per_s_mmHg",&biogears::AreaPerTimePressureUnit::cm2_Per_s_mmHg)
.def_readonly_static("m2_Per_min_mmHg",&biogears::AreaPerTimePressureUnit::m2_Per_min_mmHg)
.def_readonly_static("cm2_Per_min_mmHg",&biogears::AreaPerTimePressureUnit::cm2_Per_min_mmHg)
;
py::class_<biogears::HeatCapacitanceUnit>(m, "HeatCapacitanceUnit")
.def_readonly_static("J_Per_K",&biogears::HeatCapacitanceUnit::J_Per_K)
.def_readonly_static("kJ_Per_K",&biogears::HeatCapacitanceUnit::kJ_Per_K)
.def_readonly_static("kcal_Per_K",&biogears::HeatCapacitanceUnit::kcal_Per_K)
.def_readonly_static("kcal_Per_C",&biogears::HeatCapacitanceUnit::kcal_Per_C)
;
py::class_<biogears::AmountPerTimeUnit>(m, "AmountPerTimeUnit")
.def_readonly_static("mol_Per_day",&biogears::AmountPerTimeUnit::mol_Per_day)
.def_readonly_static("mol_Per_s",&biogears::AmountPerTimeUnit::mol_Per_s)
.def_readonly_static("umol_Per_s",&biogears::AmountPerTimeUnit::umol_Per_s)
.def_readonly_static("mmol_Per_min",&biogears::AmountPerTimeUnit::mmol_Per_min)
.def_readonly_static("pmol_Per_min",&biogears::AmountPerTimeUnit::pmol_Per_min)
.def_readonly_static("umol_Per_min",&biogears::AmountPerTimeUnit::umol_Per_min)
;
py::class_<biogears::EnergyPerMassUnit>(m, "EnergyPerMassUnit")
.def_readonly_static("J_Per_kg",&biogears::EnergyPerMassUnit::J_Per_kg)
.def_readonly_static("kJ_Per_kg",&biogears::EnergyPerMassUnit::kJ_Per_kg)
.def_readonly_static("mJ_Per_kg",&biogears::EnergyPerMassUnit::mJ_Per_kg)
.def_readonly_static("kcal_Per_kg",&biogears::EnergyPerMassUnit::kcal_Per_kg)
;
py::class_<biogears::ElectricResistanceUnit>(m, "ElectricResistanceUnit")
.def_readonly_static("Ohm",&biogears::ElectricResistanceUnit::Ohm)
;
py::class_<biogears::MassPerVolumeUnit>(m, "MassPerVolumeUnit")
.def_readonly_static("g_Per_dL",&biogears::MassPerVolumeUnit::g_Per_dL)
.def_readonly_static("g_Per_cm3",&biogears::MassPerVolumeUnit::g_Per_cm3)
.def_readonly_static("g_Per_m3",&biogears::MassPerVolumeUnit::g_Per_m3)
.def_readonly_static("ug_Per_mL",&biogears::MassPerVolumeUnit::ug_Per_mL)
.def_readonly_static("mg_Per_m3",&biogears::MassPerVolumeUnit::mg_Per_m3)
.def_readonly_static("kg_Per_m3",&biogears::MassPerVolumeUnit::kg_Per_m3)
.def_readonly_static("ug_Per_L",&biogears::MassPerVolumeUnit::ug_Per_L)
.def_readonly_static("g_Per_L",&biogears::MassPerVolumeUnit::g_Per_L)
.def_readonly_static("g_Per_mL",&biogears::MassPerVolumeUnit::g_Per_mL)
.def_readonly_static("mg_Per_mL",&biogears::MassPerVolumeUnit::mg_Per_mL)
.def_readonly_static("mg_Per_L",&biogears::MassPerVolumeUnit::mg_Per_L)
.def_readonly_static("mg_Per_dL",&biogears::MassPerVolumeUnit::mg_Per_dL)
.def_readonly_static("kg_Per_mL",&biogears::MassPerVolumeUnit::kg_Per_mL)
.def_readonly_static("kg_Per_L",&biogears::MassPerVolumeUnit::kg_Per_L)
;
py::class_<biogears::ForceUnit>(m, "ForceUnit")
.def_readonly_static("N",&biogears::ForceUnit::N)
.def_readonly_static("lbf",&biogears::ForceUnit::lbf)
.def_readonly_static("dyn",&biogears::ForceUnit::dyn)
;
py::class_<biogears::VolumePerPressureUnit>(m, "VolumePerPressureUnit")
.def_readonly_static("L_Per_Pa",&biogears::VolumePerPressureUnit::L_Per_Pa)
.def_readonly_static("L_Per_cmH2O",&biogears::VolumePerPressureUnit::L_Per_cmH2O);
#ifdef VERSION_INFO
  m.attr("__version__")
    = VERSION_INFO;
#else
  m.attr("__version__")
    = "dev";
#endif
}
