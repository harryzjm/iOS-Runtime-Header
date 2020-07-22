//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSBundle, NSData, NSString, UINibDecoder;

__attribute__((visibility("hidden")))
@interface UINibStorage : NSObject
{
    NSString *bundleResourceName;
    NSString *bundleDirectoryName;
    NSBundle *bundle;
    NSString *identifierForStringsFile;
    NSData *archiveData;
    UINibDecoder *nibDecoder;
    _Bool instantiatingForSimulator;
    _Bool captureImplicitLoadingContextOnDecode;
}

@property _Bool captureImplicitLoadingContextOnDecode; // @synthesize captureImplicitLoadingContextOnDecode;
@property(nonatomic) _Bool instantiatingForSimulator; // @synthesize instantiatingForSimulator;
@property(retain, nonatomic) UINibDecoder *nibDecoder; // @synthesize nibDecoder;
@property(copy, nonatomic) NSData *archiveData; // @synthesize archiveData;
@property(copy, nonatomic) NSString *identifierForStringsFile; // @synthesize identifierForStringsFile;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle;
@property(copy, nonatomic) NSString *bundleDirectoryName; // @synthesize bundleDirectoryName;
@property(copy, nonatomic) NSString *bundleResourceName; // @synthesize bundleResourceName;
- (void).cxx_destruct;

@end

