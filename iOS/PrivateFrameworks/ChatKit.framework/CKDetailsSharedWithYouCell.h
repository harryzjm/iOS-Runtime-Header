//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/CKDetailsCell-Protocol.h>

@class NSString, UISwitch;

__attribute__((visibility("hidden")))
@interface CKDetailsSharedWithYouCell <CKDetailsCell>
{
    UISwitch *_controlSwitch;
}

+ (double)estimatedHeight;
+ (double)preferredHeight;
+ (_Bool)shouldHighlight;
+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UISwitch *controlSwitch; // @synthesize controlSwitch=_controlSwitch;
- (void)prepareForReuse;
- (void)_configureNewControlSwitch;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
