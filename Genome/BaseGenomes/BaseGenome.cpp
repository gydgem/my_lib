//
// Created by gydgem on 8/11/2024.
//


#include "BaseGenome.h"

namespace hgem {

    [[maybe_unused]] std::any BaseGenome::This() {
        throw std::runtime_error("Method \"This()\" was not implemented in the inherited class");
    }

    [[maybe_unused]] std::any BaseGenome::get() {
        throw std::runtime_error("Method \"get()\" was not implemented in the inherited class");
    }

    [[maybe_unused]] std::any BaseGenome::get(const std::any &) {
        throw std::runtime_error("Method \"get(const std::any &)\" was not implemented in the inherited class");
    }

    [[maybe_unused]] BaseGenome &BaseGenome::at(const std::string &) {
        throw std::runtime_error("Method \"at(const std::string &)\" was not implemented in the inherited class");
    }

    [[maybe_unused]] BaseGenome &BaseGenome::at(u_int64_t) {
        throw std::runtime_error("Method \"at(u_int64_t)\" was not implemented in the inherited class");
    }

    [[maybe_unused]] void BaseGenome::add(const std::string &, BaseGenome &node) {
        throw std::runtime_error(
                "Method \"add(const std::string &, BaseGenome &node)\" was not implemented in the inherited class");
    }

    [[maybe_unused]] void BaseGenome::add(u_int64_t, BaseGenome &node) {
        throw std::runtime_error(
                "Method \"add(u_int64_t, BaseGenome &node)\" was not implemented in the inherited class");
    }

    [[maybe_unused]] void BaseGenome::add(BaseGenome &node) {
        throw std::runtime_error(
                "Method \"add(BaseGenome &node)\" was not implemented in the inherited class");
    }

    [[maybe_unused]] void BaseGenome::add(const std::string &, const std::any &) {
        throw std::runtime_error(
                "Method \"add(const std::string &, const std::any &)\" was not implemented in the inherited class");
    }

    [[maybe_unused]] void BaseGenome::add(u_int64_t, const std::any &) {
        throw std::runtime_error(
                "Method \"add(u_int64_t, const std::any &)\" was not implemented in the inherited class");
    }

    [[maybe_unused]] void BaseGenome::erase(std::string &) {
        throw std::runtime_error(
                "Method \"erase(std::string &)\" was not implemented in the inherited class");
    }

    [[maybe_unused]] void BaseGenome::erase(u_int64_t) {
        throw std::runtime_error(
                "Method \"erase(u_int64_t)\" was not implemented in the inherited class");
    }

    [[maybe_unused]] void BaseGenome::mutation() {
        throw std::runtime_error("Method \"mutation()\" was not implemented in the inherited class");
    }

    [[maybe_unused]] void BaseGenome::crossing(const std::any &) {
        throw std::runtime_error("Method \"crossing(const std::any &)\" was not implemented in the inherited class");
    }

} // hgem