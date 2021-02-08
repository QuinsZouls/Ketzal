//
// Created by alfre on 07/02/2021.
//

#ifndef TRICOIN_BLOCKCHAIN_H

#include <cstdint>
#include <vector>
#include "block.h"

using namespace std;

class Blockchain {
public:
    Blockchain();

    void AddBlock(Block bNew);

private:
    uint32_t _nDifficulty;
    vector<Block> _vChain;

    Block _GetLastBlock() const;
};

#define TRICOIN_BLOCKCHAIN_H

#endif //TRICOIN_BLOCKCHAIN_H
