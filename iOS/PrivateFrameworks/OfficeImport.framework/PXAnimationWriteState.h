//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OCXWriteState, TCXmlPrefixStreamWriter;

__attribute__((visibility("hidden")))
@interface PXAnimationWriteState : NSObject
{
    unsigned long long mCommonTimeNodeDataId;
    OCXWriteState *mWriteState;
    TCXmlPrefixStreamWriter *mFile;
    _Bool mHasMainSeqTimeNodeId;
    unsigned long long mMainSeqTimeNodeId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TCXmlPrefixStreamWriter *file; // @synthesize file=mFile;
@property(retain, nonatomic) OCXWriteState *writeState; // @synthesize writeState=mWriteState;
- (unsigned long long)mainSeqTimeNodeId;
- (void)setMainSeqTimeNodeId:(unsigned long long)arg1;
- (_Bool)hasMainSeqTimeNodeId;
- (unsigned long long)newCommonTimeNodeDataId;
- (id)initWithWriteState:(id)arg1 file:(id)arg2;

@end

