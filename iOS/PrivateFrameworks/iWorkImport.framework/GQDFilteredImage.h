//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQDNameMappable-Protocol.h>

@class GQDImageBinary, NSString;

__attribute__((visibility("hidden")))
@interface GQDFilteredImage : NSObject <GQDNameMappable>
{
    GQDImageBinary *mOriginalImageBinary;
    GQDImageBinary *mFilteredImageBinary;
}

+ (const struct StateSpec *)stateForReading;
- (void)dealloc;
- (id)imageBinary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

