//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface STStgInfo : NSObject
{
    NSString *m_pstrName;
    int m_type;
    unsigned int m_userFlags;
    unsigned int m_size;
    long long m_creationTime;
    long long m_modificationTime;
    int m_accessMode;
    CDStruct_214f2dba m_clsid;
}

- (void)setCLSID:(CDStruct_214f2dba)arg1;
- (CDStruct_214f2dba)getCLSID;
- (void)setAccessMode:(int)arg1;
- (int)getAccessMode;
- (void)setModificationTime:(long long)arg1;
- (long long)getModificationTime;
- (void)setCreationTime:(long long)arg1;
- (long long)getCreationTime;
- (void)setSize:(unsigned int)arg1;
- (unsigned int)getSize;
- (void)setUserFlags:(unsigned int)arg1;
- (unsigned int)getUserFlags;
- (void)setType:(int)arg1;
- (int)getType;
- (void)setName:(id)arg1;
- (id)getName;
- (void)dealloc;
- (id)initWithStgInfo:(const struct _StgInfo *)arg1;
- (id)init;

@end

