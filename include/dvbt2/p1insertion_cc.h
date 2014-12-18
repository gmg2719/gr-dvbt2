/* -*- c++ -*- */
/* 
 * Copyright 2014 Ron Economos.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */


#ifndef INCLUDED_DVBT2_P1INSERTION_CC_H
#define INCLUDED_DVBT2_P1INSERTION_CC_H

#include <dvbt2/api.h>
#include <dvbt2/dvbt2_config.h>
#include <gnuradio/block.h>

namespace gr {
  namespace dvbt2 {

    /*!
     * \brief <+description of block+>
     * \ingroup dvbt2
     *
     */
    class DVBT2_API p1insertion_cc : virtual public gr::block
    {
     public:
      typedef boost::shared_ptr<p1insertion_cc> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of dvbt2::p1insertion_cc.
       *
       * To avoid accidental use of raw pointers, dvbt2::p1insertion_cc's
       * constructor is in a private implementation
       * class. dvbt2::p1insertion_cc::make is the public interface for
       * creating new instances.
       */
      static sptr make(dvbt2_extended_carrier_t carriermode, dvbt2_fftsize_t fftsize, dvbt2_guardinterval_t guardinterval, int numdatasyms, dvbt2_version_t version, dvbt2_preamble_t preamble1, dvbt2_preamble_t preamble2, dvbt2_showlevels_t showlevels, float vclip);
    };

  } // namespace dvbt2
} // namespace gr

#endif /* INCLUDED_DVBT2_P1INSERTION_CC_H */

