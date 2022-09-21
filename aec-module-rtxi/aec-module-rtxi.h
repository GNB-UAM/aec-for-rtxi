/*
 Copyright (C) 2022 GNB-UAM

 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.

 */

#include <default_gui_model.h>

class AecModuleRtxi : public DefaultGUIModel
{

  public:
    AecModuleRtxi(void);
    virtual ~AecModuleRtxi(void);

    void execute(void);
    void createGUI(DefaultGUIModel::variable_t*, int);
    void customizeGUI(void);

  protected:
    virtual void update(DefaultGUIModel::update_flags_t);

  private:

    std::vector<double> kernel;
    std::vector<double> read_kernel();
    double aux;
    double current_scale;

    template<typename T> std::vector<T> conv(std::vector<T> const &f, std::vector<T> const &g);

    double period;
    void initParameters();

};
