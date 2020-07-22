//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface PHFaceprint : NSObject
{
    long long _faceprintVersion;
    NSData *_faceprintData;
}

@property(readonly, retain, nonatomic) NSData *faceprintData; // @synthesize faceprintData=_faceprintData;
@property(readonly, nonatomic) long long faceprintVersion; // @synthesize faceprintVersion=_faceprintVersion;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithFaceprintData:(id)arg1 faceprintVersion:(long long)arg2;

@end

