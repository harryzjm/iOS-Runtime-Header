//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PHAJobWorkInfo : NSObject
{
    int _workerFlags;
    NSString *_assetLocalIdentifier;
}

@property(nonatomic) int workerFlags; // @synthesize workerFlags=_workerFlags;
@property(readonly, copy, nonatomic) NSString *assetLocalIdentifier; // @synthesize assetLocalIdentifier=_assetLocalIdentifier;
- (void).cxx_destruct;
- (id)initWithAssetLocalIdentifier:(id)arg1 workerFlags:(int)arg2;

@end

