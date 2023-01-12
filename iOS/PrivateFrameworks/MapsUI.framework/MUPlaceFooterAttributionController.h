//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MULinkView, NSArray, NSString, UIView;

__attribute__((visibility("hidden")))
@interface MUPlaceFooterAttributionController : NSObject
{
    NSArray *_providerNames;
    MULinkView *_attributionView;
    _Bool _interactable;
    CDUnknownBlockType _actionBlock;
    NSString *_formatString;
}

+ (id)transitAttributionControllerForMapItem:(id)arg1 transitLine:(id)arg2;
+ (id)attributionControllerForMapItem:(id)arg1;
+ (id)attributionControllerForMapItemAttribution:(id)arg1;
+ (id)vendorAttributionFormatString;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isInteractable) _Bool interactable; // @synthesize interactable=_interactable;
@property(readonly, nonatomic) NSString *formatString; // @synthesize formatString=_formatString;
@property(copy, nonatomic) NSArray *providerNames; // @synthesize providerNames=_providerNames;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(readonly, nonatomic) UIView *attributionView;
- (void)_attributionTapped;
- (void)_updateTitle;
- (void)_setupAttribution;
- (id)initWithFormatString:(id)arg1 providerNames:(id)arg2 isInteractable:(_Bool)arg3;

@end

