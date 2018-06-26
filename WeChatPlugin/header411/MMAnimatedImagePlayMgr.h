//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, NSMutableArray, NSMutableSet, NSTimer;

@interface MMAnimatedImagePlayMgr : NSObject
{
    NSTimer *m_timer;
    NSMutableSet *m_playingTasks;
    NSMapTable *m_viewToTaskTable;
    NSMutableArray *m_stashTasks;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
+ (void)initialize;
- (void).cxx_destruct;
- (void)onWorkspaceScreenDidSleep;
- (void)onApplicationDidBecomeActive:(id)arg1;
- (void)onApplicationWillTerminate:(id)arg1;
- (void)UnRegisterSysNotifications;
- (void)RegisterSysNotifications;
- (unsigned long long)getTickCount;
- (void)updateTasks;
- (void)stopUpdateTasks;
- (void)startUpdateTasks;
- (void)stopPlayTaskByWindow:(id)arg1;
- (void)startPlayTaskByWindow:(id)arg1;
- (void)removeAllPlayTask;
- (void)removePlayTaskWithView:(id)arg1;
- (void)addPlayTaskWithView:(id)arg1 decoder:(id)arg2 config:(id)arg3;
- (void)addPlayTaskWithView:(id)arg1 decoder:(id)arg2;
- (id)init;
- (void)dealloc;

@end
