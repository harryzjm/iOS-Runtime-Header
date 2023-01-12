//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray;

@interface TIDeleteWordEvent
{
    NSMutableArray *_allKeyboardInputsM;
    NSMutableArray *_allTouchesM;
    NSMutableArray *_candidatesOfferedM;
    NSMutableArray *_touchLayoutsM;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *touchLayoutsM; // @synthesize touchLayoutsM=_touchLayoutsM;
@property(retain, nonatomic) NSMutableArray *candidatesOfferedM; // @synthesize candidatesOfferedM=_candidatesOfferedM;
@property(retain, nonatomic) NSMutableArray *allTouchesM; // @synthesize allTouchesM=_allTouchesM;
@property(retain, nonatomic) NSMutableArray *allKeyboardInputsM; // @synthesize allKeyboardInputsM=_allKeyboardInputsM;
@property(readonly, nonatomic) NSArray *touchLayouts;
@property(readonly, nonatomic) NSArray *candidatesOffered;
@property(readonly, nonatomic) NSArray *allTouches;
@property(readonly, nonatomic) NSArray *allKeyboardInputs;
- (void)addTouches:(id)arg1 withLayoutIDs:(id)arg2;
- (void)addCandidatesOffered:(id)arg1;
- (void)addKeyInputs:(id)arg1;
- (void)addKeyInput:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTIKeyboardState:(id)arg1;

@end
