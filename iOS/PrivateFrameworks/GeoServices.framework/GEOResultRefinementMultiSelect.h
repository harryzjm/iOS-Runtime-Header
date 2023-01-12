//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface GEOResultRefinementMultiSelect : NSObject
{
    _Bool _showEqualWidthButtonsOnFilterView;
    unsigned int _maximumNumberOfSelectElements;
    NSString *_displayName;
    NSArray *_multiSelect;
    long long _clauseType;
}

- (void).cxx_destruct;
@property(nonatomic) long long clauseType; // @synthesize clauseType=_clauseType;
@property(readonly, nonatomic) _Bool showEqualWidthButtonsOnFilterView; // @synthesize showEqualWidthButtonsOnFilterView=_showEqualWidthButtonsOnFilterView;
@property(nonatomic) unsigned int maximumNumberOfSelectElements; // @synthesize maximumNumberOfSelectElements=_maximumNumberOfSelectElements;
@property(copy, nonatomic) NSArray *multiSelect; // @synthesize multiSelect=_multiSelect;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)convertToGEOPDResultRefinementMultiSelect;
- (id)initWithResultRefinementMultiSelect:(id)arg1;
- (id)initWithDisplayName:(id)arg1 multiSelect:(id)arg2 maximumNumberOfSelectElements:(unsigned int)arg3 clauseType:(long long)arg4 showEqualWidthButtonsOnFilterView:(_Bool)arg5;

@end
