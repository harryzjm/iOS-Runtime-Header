//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSISVariable, NSString;

__attribute__((visibility("hidden")))
@interface NSISPlaybackOperationVariableDelegate : NSObject
{
    NSISVariable *_variable;
    NSString *_variableDescription;
    NSString *_markedConstraintDescription;
    _Bool _variableIsUserObservable;
    int _orientationHint;
}

@property int orientationHint; // @synthesize orientationHint=_orientationHint;
@property _Bool variableIsUserObservable; // @synthesize variableIsUserObservable=_variableIsUserObservable;
@property(copy) NSString *markedConstraintDescription; // @synthesize markedConstraintDescription=_markedConstraintDescription;
@property(copy) NSString *variableDescription; // @synthesize variableDescription=_variableDescription;
@property(retain) NSISVariable *variable; // @synthesize variable=_variable;
- (void)_addToEngine:(id)arg1;
- (id)secondItem;
- (id)firstItem;
- (id)description;
- (int)nsis_orientationHintForVariable:(id)arg1;
- (_Bool)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (void)dealloc;

@end

