//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModelConfiguration, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface MLE5ProgramLibraryOnDeviceAOTCompilationImpl : NSObject
{
    NSURL *_milTextURL;
    MLModelConfiguration *_configuration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MLModelConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) NSURL *milTextURL; // @synthesize milTextURL=_milTextURL;
- (struct e5rt_program_library *)createProgramLibraryHandleAndReturnError:(id *)arg1;
@property(readonly, copy, nonatomic) NSString *modelDisplayName;
- (id)initWithMILTextAtURL:(id)arg1 configuration:(id)arg2;

@end

