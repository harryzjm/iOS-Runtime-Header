//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <RemoteUI/RemoteUITableFooter-Protocol.h>

@class NSDictionary, NSString, OBPrivacyLinkController;

@interface RUIPrivacyLinkContainerView : UIView <RemoteUITableFooter>
{
    NSDictionary *_attributes;
    OBPrivacyLinkController *_linkController;
}

@property(readonly) OBPrivacyLinkController *linkController; // @synthesize linkController=_linkController;
- (void).cxx_destruct;
- (double)footerHeightForWidth:(double)arg1 inView:(id)arg2;
- (void)layoutSubviews;
- (void)configureInPage:(id)arg1;
- (id)initWithAttributes:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

