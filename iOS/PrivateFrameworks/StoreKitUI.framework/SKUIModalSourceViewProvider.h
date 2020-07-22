//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIBarButtonItem, UIView;
@protocol SKUIModalSourceViewProviderDelegate;

@interface SKUIModalSourceViewProvider : NSObject
{
    id <SKUIModalSourceViewProviderDelegate> _delegate;
    _Bool _hideOriginalSourceView;
    UIView *_originalSourceView;
    UIBarButtonItem *_sourceButtonBarItem;
    id _userInfo;
    UIView *_sourceView;
}

@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) UIBarButtonItem *sourceButtonBarItem; // @synthesize sourceButtonBarItem=_sourceButtonBarItem;
@property(retain, nonatomic) UIView *originalSourceView; // @synthesize originalSourceView=_originalSourceView;
@property(nonatomic) __weak id <SKUIModalSourceViewProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showOriginalSourceView;
- (void)hideOriginalSourceView;
- (id)animationView;

@end

