//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL, SCNMTLLibraryManager;
@protocol MTLLibrary;

__attribute__((visibility("hidden")))
@interface SCNMTLLibrary : NSObject
{
    NSURL *_libraryURL;
    SCNMTLLibraryManager *_manager;
    id <MTLLibrary> _library;
}

@property(readonly, nonatomic) id <MTLLibrary> library; // @synthesize library=_library;
- (void)_load;
- (void)dealloc;
- (id)initWithPath:(id)arg1 manager:(id)arg2;

@end

