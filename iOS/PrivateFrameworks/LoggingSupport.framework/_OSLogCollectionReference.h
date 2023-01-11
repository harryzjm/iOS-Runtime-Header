//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _OSLogDirectoryReference;

__attribute__((visibility("hidden")))
@interface _OSLogCollectionReference : NSObject
{
    _OSLogDirectoryReference *_diagnosticsDirectoryReference;
    _OSLogDirectoryReference *_timesyncReference;
    _OSLogDirectoryReference *_UUIDTextReference;
}

+ (id)localDBRefWithError:(id *)arg1;
+ (id)referenceWithURL:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) _OSLogDirectoryReference *UUIDTextReference; // @synthesize UUIDTextReference=_UUIDTextReference;
@property(readonly, nonatomic) _OSLogDirectoryReference *timesyncReference; // @synthesize timesyncReference=_timesyncReference;
@property(readonly, nonatomic) _OSLogDirectoryReference *diagnosticsDirectoryReference; // @synthesize diagnosticsDirectoryReference=_diagnosticsDirectoryReference;
- (void).cxx_destruct;
- (void)close;
- (id)initWithDiagnosticsDirectory:(id)arg1 timesyncDirectory:(id)arg2 UUIDTextDirectory:(id)arg3;

@end

