//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IBAutolayoutStatus;
@protocol IBCollection;

@interface IBAutolayoutFramesOnlyFrameDecisionMarshallingRequest
{
    id <IBCollection> _items;
    IBAutolayoutStatus *_initialStatus;
}

@property(retain, nonatomic) IBAutolayoutStatus *initialStatus; // @synthesize initialStatus=_initialStatus;
@property(copy, nonatomic) id <IBCollection> items; // @synthesize items=_items;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;

@end

