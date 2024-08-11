//
// Created by gydgem on 8/11/2024.
//

#ifndef GENOME_BASEGENOME_H
#define GENOME_BASEGENOME_H

#include <any>
#include <string>
#include <stdexcept>

namespace hgem {

    class BaseGenome {
    public:
        virtual ~BaseGenome() = default;

        //accesses a pointer to this class
        [[maybe_unused]] virtual std::any This();

        //returns the value of a class of type std::any
        [[maybe_unused]] virtual std::any get();

        [[maybe_unused]] virtual std::any get(const std::any&);

        //access a class element
        [[maybe_unused]] virtual BaseGenome &at(const std::string &);

        [[maybe_unused]] virtual BaseGenome &at(u_int64_t);

        //adds new elements to the class
        [[maybe_unused]] virtual void add(const std::string &,BaseGenome& node);

        [[maybe_unused]] virtual void add(u_int64_t ,BaseGenome& node);

        [[maybe_unused]] virtual void add(BaseGenome& node);

        [[maybe_unused]] virtual void add(const std::string &, const std::any&);

        [[maybe_unused]] virtual void add(u_int64_t, const std::any&);

        //removes elements from a class
        [[maybe_unused]]  virtual void erase(std::string &);

        [[maybe_unused]] virtual void erase(u_int64_t);

        //mutates a class object
        [[maybe_unused]] virtual void mutation();

        //cross a class object
        [[maybe_unused]] virtual void crossing(const std::any&);
    };

} // hgem

#endif //GENOME_BASEGENOME_H
