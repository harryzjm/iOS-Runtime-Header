//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPServerObjectDatabase;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_MPServerObjectDatabase : NSObject
{
    MPServerObjectDatabase *_underlyingServerObjectDatabase;
}

+ (id)sharedServerObjectDatabase;
- (void).cxx_destruct;
- (id)payloadDataForIdentifier:(id)arg1 catalogTypeDescription:(id)arg2 error:(id *)arg3;
- (id)importObjectsFromRequest:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)_initWithUnderlyingServerObjectDatabase:(id)arg1;

@end
