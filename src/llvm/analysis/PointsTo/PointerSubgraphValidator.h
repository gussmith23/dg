#ifndef _LLVM_DG_POINTER_SUBGRAPH_VALIDATOR_H_
#define _LLVM_DG_POINTER_SUBGRAPH_VALIDATOR_H_

#include "analysis/PointsTo/PointerSubgraph.h"
#include "analysis/PointsTo/PointerSubgraphValidator.h"

namespace dg {
namespace analysis {
namespace pta {
namespace debug {

/**
 * Take PointerSubgraph instance and check
 * whether it is not broken
 */
class LLVMPointerSubgraphValidator : public PointerSubgraphValidator {
public:
    LLVMPointerSubgraphValidator(PointerSubgraph *ps)
    : PointerSubgraphValidator(ps) {}

    ~LLVMPointerSubgraphValidator() = default;
};

} // namespace debug
} // namespace pta
} // namespace analysis
} // namespace dg



#endif // _LLVM_DG_POINTER_SUBGRAPH_VALIDATOR_H_
