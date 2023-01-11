//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSIndexConnection, NSString;

@interface CSPrivateSearchableIndex
{
    _Bool _attemptedIndexPathResolution;
    NSString *_resolvedIndexPath;
    NSString *_indexPath;
    CSIndexConnection *_savedConnection;
}

+ (id)defaultSearchableIndex;
@property(retain, nonatomic) CSIndexConnection *savedConnection; // @synthesize savedConnection=_savedConnection;
@property(retain, nonatomic) NSString *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) NSString *resolvedIndexPath; // @synthesize resolvedIndexPath=_resolvedIndexPath;
@property _Bool attemptedIndexPathResolution; // @synthesize attemptedIndexPathResolution=_attemptedIndexPathResolution;
- (void).cxx_destruct;
- (id)xpc_dictionary_for_command:(const char *)arg1 requiresInitialization:(_Bool)arg2;
- (id)connection;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end
