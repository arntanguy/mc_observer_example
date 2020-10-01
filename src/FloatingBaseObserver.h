#pragma once

#include <mc_observers/BodySensorObserver.h>

namespace reemc
{

struct FloatingBaseObserver : public mc_observers::BodySensorObserver
{

  FloatingBaseObserver(const std::string &type, double dt);

  void configure (const mc_control::MCController &ctl, const mc_rtc::Configuration &) override;

  void reset(const mc_control::MCController &ctl) override;

  bool run(const mc_control::MCController &ctl) override;

  void update(mc_control::MCController &ctl) override;

};

} // namespace reemc
