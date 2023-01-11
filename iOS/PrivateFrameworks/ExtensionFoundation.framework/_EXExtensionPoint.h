//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ExtensionFoundation/EXExtensionPoint-Protocol.h>
#import <ExtensionFoundation/NSCopying-Protocol.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _EXExtensionPoint : NSObject <EXExtensionPoint, NSCopying>
{
    unsigned int _platform;
    NSString *_identifier;
    NSDictionary *_SDKDictionary;
}

- (void).cxx_destruct;
@property unsigned int platform; // @synthesize platform=_platform;
@property(retain) NSDictionary *SDKDictionary; // @synthesize SDKDictionary=_SDKDictionary;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (void)reset;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
