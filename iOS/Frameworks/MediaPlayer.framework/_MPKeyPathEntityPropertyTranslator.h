//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPEntityPropertyTranslator-Protocol.h>

@class NSArray, NSString;

@interface _MPKeyPathEntityPropertyTranslator : NSObject <MPEntityPropertyTranslator>
{
    NSArray *_sourceKeyPaths;
    CDUnknownBlockType _valueTransformBlock;
    CDUnknownFunctionPointerType _valueTransformFunction;
}

+ (id)translatorForKeyPaths:(id)arg1 valueTransformFunction:(CDUnknownFunctionPointerType)arg2;
+ (id)translatorForKeyPaths:(id)arg1 valueTransformBlock:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownFunctionPointerType valueTransformFunction; // @synthesize valueTransformFunction=_valueTransformFunction;
@property(readonly, nonatomic) CDUnknownBlockType valueTransformBlock; // @synthesize valueTransformBlock=_valueTransformBlock;
@property(readonly, nonatomic) NSArray *sourceKeyPaths; // @synthesize sourceKeyPaths=_sourceKeyPaths;
- (id)valueFromSource:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
