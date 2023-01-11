//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/CKDetailsCell-Protocol.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface CKDetailsChildViewControllerCell <CKDetailsCell>
{
    _Bool _shouldUseLayoutMargins;
    UIView *_childViewControllerView;
}

+ (_Bool)shouldHighlight;
+ (id)reuseIdentifier;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldUseLayoutMargins; // @synthesize shouldUseLayoutMargins=_shouldUseLayoutMargins;
@property(retain, nonatomic) UIView *childViewControllerView; // @synthesize childViewControllerView=_childViewControllerView;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
