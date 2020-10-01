#include <mc_observers/ObserverMacros.h>
#include <FloatingBaseObserver.h>

namespace reemc
{

FloatingBaseObserver::FloatingBaseObserver(const std::string &type, double dt) : mc_observers::BodySensorObserver(type, dt) {}

void FloatingBaseObserver::configure (const mc_control::MCController &ctl, const mc_rtc::Configuration &config)
{
  BodySensorObserver::configure(ctl, config);
}

void FloatingBaseObserver::reset(const mc_control::MCController &ctl)
{
  BodySensorObserver::reset(ctl);
}

bool FloatingBaseObserver::run(const mc_control::MCController &ctl)
{
  BodySensorObserver::run(ctl);
  return true;
}

void FloatingBaseObserver::update(mc_control::MCController &ctl)
{
  BodySensorObserver::update(ctl);
}

} // namespace reemc
EXPORT_OBSERVER_MODULE("ExampleFloatingBaseObserver", reemc::FloatingBaseObserver)
