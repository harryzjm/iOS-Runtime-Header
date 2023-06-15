//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRCTLD, CRCTLDConfig;

@interface CHCTLD : NSObject
{
    CRCTLD *_ctld;
    CRCTLDConfig *_ctldConfig;
}

- (void).cxx_destruct;
@property(retain) CRCTLDConfig *ctldConfig; // @synthesize ctldConfig=_ctldConfig;
@property(retain) CRCTLD *ctld; // @synthesize ctld=_ctld;
- (id)mergeStrokeGroups:(id)arg1;
- (id)strokeGroupRegions:(id)arg1;
- (id)orderStrokeGroups:(id)arg1;
- (id)createStrokeGroupingCTLDConfigWithType:(unsigned long long)arg1;
- (id)initWithType:(unsigned long long)arg1;
- (id)init;

@end

