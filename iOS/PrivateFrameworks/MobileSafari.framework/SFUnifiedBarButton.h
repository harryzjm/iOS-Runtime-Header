//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SFUnifiedBarButtonView, UIImage;

@interface SFUnifiedBarButton
{
    SFUnifiedBarButtonView *_buttonView;
    CDUnknownBlockType _action;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
- (void)_performAction;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) NSString *accessibilityIdentifier;
@property(nonatomic) _Bool showsPlatter;
- (void)setEnabled:(_Bool)arg1;
@property(retain, nonatomic) UIImage *image;
- (id)view;
- (id)initWithImage:(id)arg1 action:(CDUnknownBlockType)arg2;

@end
