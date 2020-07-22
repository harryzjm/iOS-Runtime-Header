//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TSCEFunctionSpec : NSObject
{
    NSString *mFunctionName;
    short mMinArguments;
    short mMaxArguments;
    short mRepeatingGroupSize;
    NSArray *mArguments;
    NSArray *mRepeatingArguments;
    _Bool mIsOperator;
    int mShipVersion;
    int mFunctionIndex;
}

+ (id)unsupportedFunctionNameForLocale:(id)arg1;
+ (_Bool)isModeEnabled:(short)arg1 functionIndex:(short)arg2;
+ (id)functionSpecForFunctionName:(id)arg1;
+ (id)functionSpecForFunctionIndex:(int)arg1;
+ (id)specWithFunctionName:(id)arg1 minArgs:(id)arg2 maxArgs:(id)arg3 repeatingGroupSize:(id)arg4 isOperator:(int)arg5 shipVersion:(int)arg6 arguments:(id)arg7 functionIndex:(int)arg8;
+ (_Bool)hasAnyDateArgumentsToFunction:(int)arg1;
+ (id)specDictionary;
@property(readonly, nonatomic) short repeatingGroupSize; // @synthesize repeatingGroupSize=mRepeatingGroupSize;
@property(readonly, nonatomic) int versionShippedIn; // @synthesize versionShippedIn=mShipVersion;
@property(readonly, nonatomic) _Bool isOperator; // @synthesize isOperator=mIsOperator;
@property(readonly, nonatomic) short maxArguments; // @synthesize maxArguments=mMaxArguments;
@property(readonly, nonatomic) short minArguments; // @synthesize minArguments=mMinArguments;
@property(readonly) int functionIndex; // @synthesize functionIndex=mFunctionIndex;
- (id)nativeSyntaxStringForArgument:(int)arg1;
- (id)argumentSpecForIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numArguments;
@property(readonly, nonatomic) NSArray *arguments;
- (id)displayStringForLocale:(id)arg1;
- (id)localizedToolTipStringForLocale:(id)arg1;
- (id)localizedFunctionNameForLocale:(id)arg1;
@property(readonly, nonatomic) NSString *functionName;
- (void)dealloc;
- (id)initWithFunctionName:(id)arg1 minArgs:(int)arg2 maxArgs:(int)arg3 repeatingGroupSize:(int)arg4 isOperator:(_Bool)arg5 shipVersion:(int)arg6 arguments:(id)arg7 functionIndex:(int)arg8;
- (id)description;
- (void)p_ValidateArguments;

@end

