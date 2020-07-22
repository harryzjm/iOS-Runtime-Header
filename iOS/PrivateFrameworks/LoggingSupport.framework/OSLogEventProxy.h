//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <LoggingSupport/OSLogEventProvider-Protocol.h>

@class NSDate, NSString, NSTimeZone, NSUUID;

@interface OSLogEventProxy : NSObject <OSLogEventProvider>
{
    struct os_activity_map_s *_aid_map;
    struct {
        unsigned long long type;
        int pid;
        unsigned long long proc_id;
        unsigned int pidversion;
        char *proc_imageuuid;
        char *proc_imagepath;
        unsigned long long activity_id;
        unsigned long long parent_id;
        struct {
            unsigned long long trace_id;
            unsigned long long timestamp;
            unsigned long long thread;
            struct mach_timebase_info timebase;
            char *dsc_uuid;
            char *image_uuid;
            char *image_path;
            struct timeval tv_gmt;
            struct timezone tz;
            unsigned int offset;
            unsigned int opaque_flags;
            char *ptr;
            unsigned long long sz;
        } common;
        union {
            struct {
                unsigned long long creator_aid;
                unsigned long long unique_pid;
            } activity_create;
            struct {
                unsigned long long transition_id;
            } activity_transition;
            struct {
                char *buffer;
                unsigned long long buffer_sz;
                char *privdata;
                unsigned long long privdata_sz;
                char *subsystem;
                char *category;
                unsigned int oversize_id;
                unsigned char ttl;
                _Bool persisted;
                unsigned char signpost_scope;
                unsigned char signpost_type;
                unsigned long long signpost_id;
            } log_message;
            struct {
                char *action;
                _Bool persisted;
            } useraction;
            struct {
                unsigned char boot_uuid[16];
                unsigned long long flags;
                unsigned long long continuous_time;
                unsigned long long wallclock_nsec;
                unsigned char ttl;
            } timesync;
        } ;
        struct {
            unsigned long long message_size;
            unsigned char ttl;
        } statedump;
    } _eint;
    CDStruct_c6d697a1 *_event;
    unsigned long long _efv;
    struct _os_timesync_db_s *_tsdb;
    int _uuiddbfd;
    struct timezone _tz;
    _Bool _sensitive;
    _Bool _trackActivities;
    unsigned long long _thread;
    unsigned long long _retainCount;
    NSString *_processImagePath;
    NSString *_senderImagePath;
    NSString *_logMessage;
    unsigned long long _uuidi;
}

+ (id)_make;
@property(nonatomic) unsigned long long _timesyncRangeUUIDIndex; // @synthesize _timesyncRangeUUIDIndex=_uuidi;
- (id)valueForUndefinedKey:(id)arg1;
@property(readonly, nonatomic) unsigned long long creatorProcessUniqueIdentifier;
@property(readonly, nonatomic) unsigned long long creatorActivityIdentifier;
- (id)formatArguments;
@property(readonly, nonatomic) NSString *formatString;
@property(readonly, nonatomic) unsigned long long signpostScope;
@property(readonly, nonatomic) unsigned long long signpostType;
@property(readonly, nonatomic) unsigned long long signpostIdentifier;
@property(readonly, nonatomic) NSString *category;
@property(readonly, nonatomic) NSString *subsystem;
@property(readonly, nonatomic) unsigned long long senderImageOffset;
@property(readonly, nonatomic) NSString *sender;
@property(readonly, nonatomic) NSString *senderImagePath;
@property(readonly, nonatomic) const char *senderImageUUIDBytes;
@property(readonly, nonatomic) NSUUID *senderImageUUID;
@property(readonly, nonatomic) NSString *process;
@property(readonly, nonatomic) NSString *processImagePath;
@property(readonly, nonatomic) const char *processImageUUIDBytes;
@property(readonly, nonatomic) NSUUID *processImageUUID;
- (unsigned long long)processUniqueIdentifier;
@property(readonly, nonatomic) unsigned long long machContinuousTimestamp;
@property(readonly, nonatomic) unsigned long long continuousNanosecondsSinceBoot;
@property(readonly, nonatomic) NSUUID *bootUUID;
@property(readonly, nonatomic) unsigned long long transitionActivityIdentifier;
@property(readonly, nonatomic) unsigned long long parentActivityIdentifier;
@property(readonly, nonatomic) unsigned long long activityIdentifier;
- (unsigned int)processIdentifierVersion;
@property(readonly, nonatomic) int processIdentifier;
@property(readonly, nonatomic) struct timezone *unixTimeZone;
@property(readonly, nonatomic) struct timeval *unixDate;
@property(readonly, nonatomic) NSTimeZone *timeZone;
@property(readonly, nonatomic) NSDate *date;
@property(readonly, nonatomic) unsigned long long timeToLive;
@property(readonly, nonatomic) unsigned long long threadIdentifier;
@property(readonly, nonatomic) unsigned long long traceIdentifier;
@property(readonly, nonatomic) unsigned long long size;
@property(readonly, nonatomic) unsigned long long logType;
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, nonatomic) NSString *composedMessage;
@property(readonly, nonatomic) unsigned int _oversizeIdentifier;
- (id)description;
- (id)methodSignatureForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)_setLogEvent:(CDStruct_c6d697a1 *)arg1;
- (void)_setBuffer:(const void *)arg1 size:(unsigned long long)arg2 privateBuffer:(const void *)arg3 privateSize:(unsigned long long)arg4;
- (void)_setDoNotTrackActivites:(_Bool)arg1;
- (void)_setFallbackTimezone;
- (void)_setUUIDDBFileDescriptor:(int)arg1;
- (void)_setTimesyncDatabase:(struct _os_timesync_db_s *)arg1;
- (void)_setIncludeSensitive:(_Bool)arg1;
- (void)_assertBalanced;
- (oneway void)release;
- (id)retain;
- (id)init;
- (oneway void)_unmake;

@end

