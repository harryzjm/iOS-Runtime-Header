//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PXGadgetSectionHeader, PXGadgetSpec;

@interface PXGadgetSection : NSObject
{
    long long _changeCount;
    NSString *_identifier;
    NSArray *_gadgets;
    PXGadgetSectionHeader *_sectionHeader;
    PXGadgetSpec *_gadgetSpec;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
@property(readonly, nonatomic) PXGadgetSectionHeader *sectionHeader; // @synthesize sectionHeader=_sectionHeader;
@property(readonly, nonatomic) NSArray *gadgets; // @synthesize gadgets=_gadgets;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (id)init;
- (id)initWithIdentifier:(id)arg1 gadgets:(id)arg2;

@end
