//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MusicLibraryActionPendingValues : NSObject
{
    _Bool _hasPendingKeepLocalValue;
    _Bool _hasPendingLibraryState;
    long long _pendingKeepLocalValue;
    unsigned long long _pendingLibraryState;
}

@property(nonatomic) unsigned long long pendingLibraryState; // @synthesize pendingLibraryState=_pendingLibraryState;
@property(nonatomic) _Bool hasPendingLibraryState; // @synthesize hasPendingLibraryState=_hasPendingLibraryState;
@property(nonatomic) long long pendingKeepLocalValue; // @synthesize pendingKeepLocalValue=_pendingKeepLocalValue;
@property(nonatomic) _Bool hasPendingKeepLocalValue; // @synthesize hasPendingKeepLocalValue=_hasPendingKeepLocalValue;

@end

