//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface CVMLModelFilesCache : NSObject
{
    struct unique_ptr<cvml::util::model_file_cache, std::__1::default_delete<cvml::util::model_file_cache>> m_impl;
}

+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)purgeAll;
- (void)unload:(id)arg1;
- (id)load:(id)arg1;
- (id)init;

@end

