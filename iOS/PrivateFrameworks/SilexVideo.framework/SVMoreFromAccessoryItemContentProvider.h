//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVAccessoryItemContentProviding-Protocol.h>

@class NSString, SVMoreFromButton;
@protocol SVMoreFromPublisherActionTitleProviding, SVMoreFromPublisherLogoProviding;

@interface SVMoreFromAccessoryItemContentProvider : NSObject <SVAccessoryItemContentProviding>
{
    SVMoreFromButton *_accessoryItemButton;
    id <SVMoreFromPublisherActionTitleProviding> _titleProvider;
    id <SVMoreFromPublisherLogoProviding> _logoProvider;
    CDUnknownBlockType _logoCancellationBlock;
}

@property(copy, nonatomic) CDUnknownBlockType logoCancellationBlock; // @synthesize logoCancellationBlock=_logoCancellationBlock;
@property(readonly, nonatomic) id <SVMoreFromPublisherLogoProviding> logoProvider; // @synthesize logoProvider=_logoProvider;
@property(readonly, nonatomic) id <SVMoreFromPublisherActionTitleProviding> titleProvider; // @synthesize titleProvider=_titleProvider;
@property(readonly, nonatomic) SVMoreFromButton *accessoryItemButton; // @synthesize accessoryItemButton=_accessoryItemButton;
- (void).cxx_destruct;
- (void)updateAccessoryItemForVideo:(id)arg1 animated:(_Bool)arg2;
- (id)initWithMoreFromButton:(id)arg1 titleProvider:(id)arg2 logoProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
