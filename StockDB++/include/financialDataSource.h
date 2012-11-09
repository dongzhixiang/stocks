/**
 * @file    financialDataSource.h
 * @author  Hamilton Kibbe ham@hamiltonkibbe.com
 *
 * @brief   FinancialDataSource interface
 *
 *
*/

#ifndef __FINANCIALDATASOURCE_H__
#define __FINANCIALDATASOURCE_H__

/* Third Party Header Files */
#include "boost/date_time/gregorian/gregorian_types.hpp"

/* Standard Header Files */
#include <string>
#include <vector>


/* Forward Declarations */
class HistoricalQuote;

/* Typedefs */
typedef std::vector<HistoricalQuote> quoteVector_t;

class FinancialDataSource

{
    
public:
    virtual std::string get_name(const std::string &symbol) = 0;
    virtual std::string get_stock_exchange(const std::string &symbol) = 0;
    virtual void get_historical_prices(const std::string &symbol,
                                        boost::gregorian::date &start,
                                        boost::gregorian::date &end,
                                        quoteVector_t &quotes) = 0;
};

#endif