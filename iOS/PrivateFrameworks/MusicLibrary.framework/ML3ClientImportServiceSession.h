//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ML3ClientImportSessionConfiguration, ML3DatabaseConnection, ML3MusicLibrary;

@interface ML3ClientImportServiceSession : NSObject
{
    struct ML3ImportSession *_importSession;
    ML3DatabaseConnection *_databaseConnection;
    ML3MusicLibrary *_library;
    ML3ClientImportSessionConfiguration *_configuration;
}

- (void).cxx_destruct;
- (_Bool)removeTrack:(id)arg1 persistentID:(id *)arg2;
- (_Bool)updateTrack:(id)arg1 persistentID:(id *)arg2;
- (_Bool)addTrack:(id)arg1 persistentID:(id *)arg2;
- (_Bool)finish;
- (_Bool)begin;
- (void)dealloc;
- (id)initWithLibrary:(id)arg1 connection:(id)arg2 configuration:(id)arg3;

@end
