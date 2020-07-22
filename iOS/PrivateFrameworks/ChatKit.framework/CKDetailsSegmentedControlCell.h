//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/CKDetailsCell-Protocol.h>

@class NSString, UISegmentedControl;

@interface CKDetailsSegmentedControlCell <CKDetailsCell>
{
    UISegmentedControl *_segmentedControl;
}

+ (_Bool)shouldHighlight;
+ (id)reuseIdentifier;
@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
- (void).cxx_destruct;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

