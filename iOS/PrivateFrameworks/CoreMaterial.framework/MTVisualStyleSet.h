//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreMaterial/MTVisualStyleSetProviding-Protocol.h>

@class NSMutableDictionary, NSString;

@interface MTVisualStyleSet : NSObject <MTVisualStyleSetProviding>
{
    NSMutableDictionary *_visualStylesToStyleNames;
    NSMutableDictionary *_styleNamesToVisualStylings;
    long long _visualStyleSetVersion;
    NSString *_visualStyleSetName;
}

@property(readonly, copy, nonatomic) NSString *visualStyleSetName; // @synthesize visualStyleSetName=_visualStyleSetName;
@property(readonly, nonatomic) long long visualStyleSetVersion; // @synthesize visualStyleSetVersion=_visualStyleSetVersion;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)visualStylingForStyle:(id)arg1;
- (id)initWithName:(id)arg1 visualStyleSetDescription:(id)arg2 andDescendantDescriptions:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
