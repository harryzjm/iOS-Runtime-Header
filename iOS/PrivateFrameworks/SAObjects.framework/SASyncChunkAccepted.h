//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SASyncAnchor;

@interface SASyncChunkAccepted
{
}

+ (id)chunkAcceptedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)chunkAccepted;
- (_Bool)requiresResponse;
@property(retain, nonatomic) SASyncAnchor *current;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
