//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SXComponentAnchor
{
}

- (long long)anchorAlignmentForString:(id)arg1;
- (long long)targetAnchorPositionWithValue:(id)arg1 withType:(int)arg2;
- (long long)originAnchorPositionWithValue:(id)arg1 withType:(int)arg2;

// Remaining properties
@property(readonly, nonatomic) long long originAnchorPosition; // @dynamic originAnchorPosition;
@property(readonly, nonatomic) struct _NSRange range; // @dynamic range;
@property(readonly, nonatomic) long long targetAnchorPosition; // @dynamic targetAnchorPosition;
@property(readonly, nonatomic) NSString *targetComponentIdentifier; // @dynamic targetComponentIdentifier;

@end

