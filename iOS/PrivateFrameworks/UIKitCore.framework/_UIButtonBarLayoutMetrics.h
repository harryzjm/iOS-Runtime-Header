//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSLayoutDimension, NSString;

__attribute__((visibility("hidden")))
@interface _UIButtonBarLayoutMetrics : NSObject <NSCopying>
{
    _Bool _locked;
    _Bool _allowsViewWrappers;
    NSLayoutDimension *_verticalSizeGuide;
    NSLayoutDimension *_minimumSpaceGuide;
    NSLayoutDimension *_flexibleSpaceGuide;
    NSLayoutDimension *_groupSizeGuide;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool allowsViewWrappers; // @synthesize allowsViewWrappers=_allowsViewWrappers;
@property(retain, nonatomic) NSLayoutDimension *groupSizeGuide; // @synthesize groupSizeGuide=_groupSizeGuide;
@property(retain, nonatomic) NSLayoutDimension *flexibleSpaceGuide; // @synthesize flexibleSpaceGuide=_flexibleSpaceGuide;
@property(retain, nonatomic) NSLayoutDimension *minimumSpaceGuide; // @synthesize minimumSpaceGuide=_minimumSpaceGuide;
@property(retain, nonatomic) NSLayoutDimension *verticalSizeGuide; // @synthesize verticalSizeGuide=_verticalSizeGuide;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_upcastIfReadOnly;
- (id)_copyWithModifications:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

