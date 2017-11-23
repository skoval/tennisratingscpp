#ifndef ELO_H
#define ELO_H

#include <vector>
#include <map>
#include <string>

namespace Elo{

  std::map<std::string, std::vector<double>> CalculateElo(
            std::vector<std::string> winner_names,
            std::vector<std::string> loser_names,
            std::vector<double> winner_match,
            std::vector<double> loser_match, std::vector<double> slam_factor);

  std::map<std::string, std::vector<double>> CalculateServeReturnEloStaticK(
            std::vector<std::string> server_names,
            std::vector<std::string> returner_names,
            std::vector<bool> server_won,
            double k,
            double return_starting_elo = 1410.);

  double WinProbabilityP1(double elo_p1, double elo_p2);

  double MakeUpdate(double old_elo, int outcome, double k,
      double win_expectation);

 double MakeUpdateMatch(double old_elo, int outcome, double k, double slam,
                      double win_expectation);

}

#endif
