//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIMenuLeaf-Protocol.h>

@class NSArray, NSString, UIImage;
@protocol UIDeferredMenuElementDelegate;

@interface UIDeferredMenuElement <_UIMenuLeaf>
{
    _Bool _requiresAuthenticatedInput;
    _Bool _fulfilled;
    unsigned long long _attributes;
    NSString *_discoverabilityTitle;
    long long _state;
    CDUnknownBlockType _elementProvider;
    id _metadata;
    id <UIDeferredMenuElementDelegate> _delegate;
    NSArray *_fulfilledElements;
}

+ (id)elementWithProvider:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool fulfilled; // @synthesize fulfilled=_fulfilled;
@property(readonly, copy, nonatomic) NSArray *fulfilledElements; // @synthesize fulfilledElements=_fulfilledElements;
@property(nonatomic) __weak id <UIDeferredMenuElementDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) CDUnknownBlockType elementProvider; // @synthesize elementProvider=_elementProvider;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) _Bool requiresAuthenticatedInput; // @synthesize requiresAuthenticatedInput=_requiresAuthenticatedInput;
@property(copy, nonatomic) NSString *discoverabilityTitle; // @synthesize discoverabilityTitle=_discoverabilityTitle;
@property(nonatomic) unsigned long long attributes; // @synthesize attributes=_attributes;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)_validatedLeafWithAlternate:(id)arg1 target:(id)arg2 validation:(id)arg3;
- (id)_resolvedTargetFromFirstTarget:(id)arg1;
- (void)_performWithTarget:(id)arg1;
- (_Bool)_isDefaultCommand;
- (long long)_leafKeyModifierFlags;
- (id)_leafKeyInput;
- (id)_leafAlternates;
- (void)_acceptMenuVisit:(CDUnknownBlockType)arg1 commandVisit:(CDUnknownBlockType)arg2 actionVisit:(CDUnknownBlockType)arg3 deferredElementVisit:(CDUnknownBlockType)arg4;
- (id)_immutableCopy;
- (_Bool)isLoadingPlaceholder;
- (_Bool)isLeaf;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_fulfill;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) UIImage *image;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *title;

@end
