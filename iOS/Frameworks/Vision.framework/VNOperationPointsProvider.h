//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Vision/VNOperationPointsProviding-Protocol.h>

@class VNOperationPoints;

__attribute__((visibility("hidden")))
@interface VNOperationPointsProvider : NSObject <VNOperationPointsProviding>
{
    VNOperationPoints *_operationPoints;
}

- (void).cxx_destruct;
- (id)operationPointsAndReturnError:(id *)arg1;
- (id)initWithOperationPoints:(id)arg1;

@end
