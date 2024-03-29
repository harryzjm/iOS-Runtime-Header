//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MUAddMissingDataLabeledValue : NSObject
{
    _Bool _emphasizeValueString;
    int _analyticsTarget;
    int _analyticAction;
    long long _actionVariant;
    NSString *_alternativeTitleString;
    NSString *_symbolName;
    NSString *_titleString;
    NSString *_valueString;
    CDUnknownBlockType _actionBlock;
    long long _type;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool emphasizeValueString; // @synthesize emphasizeValueString=_emphasizeValueString;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(readonly, nonatomic) int analyticAction; // @synthesize analyticAction=_analyticAction;
@property(nonatomic) int analyticsTarget; // @synthesize analyticsTarget=_analyticsTarget;
@property(retain, nonatomic) NSString *valueString; // @synthesize valueString=_valueString;
@property(retain, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(retain, nonatomic) NSString *symbolName; // @synthesize symbolName=_symbolName;
@property(retain, nonatomic) NSString *alternativeTitleString; // @synthesize alternativeTitleString=_alternativeTitleString;
@property(nonatomic) long long actionVariant; // @synthesize actionVariant=_actionVariant;
- (id)initWithType:(long long)arg1;
- (id)analyticsButtonValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

