//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ML3MusicLibrary;
@protocol ML3DatabaseValidationDelegate;

@interface ML3DatabaseValidation : NSObject
{
    _Bool _truncateBeforeValidating;
    ML3MusicLibrary *_library;
    id <ML3DatabaseValidationDelegate> _delegate;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) __weak id <ML3DatabaseValidationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) ML3MusicLibrary *library; // @synthesize library=_library;
@property(nonatomic) _Bool truncateBeforeValidating; // @synthesize truncateBeforeValidating=_truncateBeforeValidating;
- (_Bool)_internalUserAgreesToRebuildUnmigratableDatabase;
- (_Bool)_performDatabasePreprocessingWithLibrary:(id)arg1 error:(id *)arg2;
- (_Bool)_performSchemaUpgradeWithLibrary:(id)arg1 error:(id *)arg2;
- (_Bool)_validateLibraryDatabaseIfNecessary:(id)arg1 withError:(id *)arg2;
- (_Bool)_truncateDatabaseFileForLibrary:(id)arg1 withError:(id *)arg2;
- (void)runValidation;
- (id)initWithLibrary:(id)arg1 delegate:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
