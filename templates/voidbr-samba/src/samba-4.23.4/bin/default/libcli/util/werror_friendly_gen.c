/*
 * Names for errors generated from
 * [MS-ERREF] https://msdn.microsoft.com/en-us/library/cc231199.aspx
 */
	case 0x0:
		return "The operation completed successfully.";
		break;
	case 0x1:
		return "Incorrect function.";
		break;
	case 0x2:
		return "The system cannot find the file specified.";
		break;
	case 0x3:
		return "The system cannot find the path specified.";
		break;
	case 0x4:
		return "The system cannot open the file.";
		break;
	case 0x5:
		return "Access is denied.";
		break;
	case 0x6:
		return "The handle is invalid.";
		break;
	case 0x7:
		return "The storage control blocks were destroyed.";
		break;
	case 0x8:
		return "Not enough storage is available to process this command.";
		break;
	case 0x9:
		return "The storage control block address is invalid.";
		break;
	case 0xa:
		return "The environment is incorrect.";
		break;
	case 0xb:
		return "An attempt was made to load a program with an incorrect format.";
		break;
	case 0xc:
		return "The access code is invalid.";
		break;
	case 0xd:
		return "The data is invalid.";
		break;
	case 0xe:
		return "Not enough storage is available to complete this operation.";
		break;
	case 0xf:
		return "The system cannot find the drive specified.";
		break;
	case 0x10:
		return "The directory cannot be removed.";
		break;
	case 0x11:
		return "The system cannot move the file to a different disk drive.";
		break;
	case 0x12:
		return "There are no more files.";
		break;
	case 0x13:
		return "The media is write-protected.";
		break;
	case 0x14:
		return "The system cannot find the device specified.";
		break;
	case 0x15:
		return "The device is not ready.";
		break;
	case 0x16:
		return "The device does not recognize the command.";
		break;
	case 0x17:
		return "Data error (cyclic redundancy check).";
		break;
	case 0x18:
		return "The program issued a command but the command length is incorrect.";
		break;
	case 0x19:
		return "The drive cannot locate a specific area or track on the disk.";
		break;
	case 0x1a:
		return "The specified disk cannot be accessed.";
		break;
	case 0x1b:
		return "The drive cannot find the sector requested.";
		break;
	case 0x1c:
		return "The printer is out of paper.";
		break;
	case 0x1d:
		return "The system cannot write to the specified device.";
		break;
	case 0x1e:
		return "The system cannot read from the specified device.";
		break;
	case 0x1f:
		return "A device attached to the system is not functioning.";
		break;
	case 0x20:
		return "The process cannot access the file because it is being used by another process.";
		break;
	case 0x21:
		return "The process cannot access the file because another process has locked a portion of the file.";
		break;
	case 0x22:
		return "The wrong disk is in the drive. Insert %2 (Volume Serial Number: %3) into drive %1.";
		break;
	case 0x24:
		return "Too many files opened for sharing.";
		break;
	case 0x26:
		return "Reached the end of the file.";
		break;
	case 0x27:
		return "The disk is full.";
		break;
	case 0x32:
		return "The request is not supported.";
		break;
	case 0x33:
		return "Windows cannot find the network path. Verify that the network path is correct and the destination computer is not busy or turned off. If Windows still cannot find the network path, contact your network administrator.";
		break;
	case 0x34:
		return "You were not connected because a duplicate name exists on the network. Go to System in Control Panel to change the computer name, and then try again.";
		break;
	case 0x35:
		return "The network path was not found.";
		break;
	case 0x36:
		return "The network is busy.";
		break;
	case 0x37:
		return "The specified network resource or device is no longer available.";
		break;
	case 0x38:
		return "The network BIOS command limit has been reached.";
		break;
	case 0x39:
		return "A network adapter hardware error occurred.";
		break;
	case 0x3a:
		return "The specified server cannot perform the requested operation.";
		break;
	case 0x3b:
		return "An unexpected network error occurred.";
		break;
	case 0x3c:
		return "The remote adapter is not compatible.";
		break;
	case 0x3d:
		return "The print queue is full.";
		break;
	case 0x3e:
		return "Space to store the file waiting to be printed is not available on the server.";
		break;
	case 0x3f:
		return "Your file waiting to be printed was deleted.";
		break;
	case 0x40:
		return "The specified network name is no longer available.";
		break;
	case 0x41:
		return "Network access is denied.";
		break;
	case 0x42:
		return "The network resource type is not correct.";
		break;
	case 0x43:
		return "The network name cannot be found.";
		break;
	case 0x44:
		return "The name limit for the local computer network adapter card was exceeded.";
		break;
	case 0x45:
		return "The network BIOS session limit was exceeded.";
		break;
	case 0x46:
		return "The remote server has been paused or is in the process of being started.";
		break;
	case 0x47:
		return "No more connections can be made to this remote computer at this time because the computer has accepted the maximum number of connections.";
		break;
	case 0x48:
		return "The specified printer or disk device has been paused.";
		break;
	case 0x50:
		return "The file exists.";
		break;
	case 0x52:
		return "The directory or file cannot be created.";
		break;
	case 0x53:
		return "Fail on INT 24.";
		break;
	case 0x54:
		return "Storage to process this request is not available.";
		break;
	case 0x55:
		return "The local device name is already in use.";
		break;
	case 0x56:
		return "The specified network password is not correct.";
		break;
	case 0x57:
		return "The parameter is incorrect.";
		break;
	case 0x58:
		return "A write fault occurred on the network.";
		break;
	case 0x59:
		return "The system cannot start another process at this time.";
		break;
	case 0x64:
		return "Cannot create another system semaphore.";
		break;
	case 0x65:
		return "The exclusive semaphore is owned by another process.";
		break;
	case 0x66:
		return "The semaphore is set and cannot be closed.";
		break;
	case 0x67:
		return "The semaphore cannot be set again.";
		break;
	case 0x68:
		return "Cannot request exclusive semaphores at interrupt time.";
		break;
	case 0x69:
		return "The previous ownership of this semaphore has ended.";
		break;
	case 0x6a:
		return "Insert the disk for drive %1.";
		break;
	case 0x6b:
		return "The program stopped because an alternate disk was not inserted.";
		break;
	case 0x6c:
		return "The disk is in use or locked by another process.";
		break;
	case 0x6d:
		return "The pipe has been ended.";
		break;
	case 0x6e:
		return "The system cannot open the device or file specified.";
		break;
	case 0x6f:
		return "The file name is too long.";
		break;
	case 0x70:
		return "There is not enough space on the disk.";
		break;
	case 0x71:
		return "No more internal file identifiers are available.";
		break;
	case 0x72:
		return "The target internal file identifier is incorrect.";
		break;
	case 0x75:
		return "The Input Output Control (IOCTL) call made by the application program is not correct.";
		break;
	case 0x76:
		return "The verify-on-write switch parameter value is not correct.";
		break;
	case 0x77:
		return "The system does not support the command requested.";
		break;
	case 0x78:
		return "This function is not supported on this system.";
		break;
	case 0x79:
		return "The semaphore time-out period has expired.";
		break;
	case 0x7a:
		return "The data area passed to a system call is too small.";
		break;
	case 0x7b:
		return "The file name, directory name, or volume label syntax is incorrect.";
		break;
	case 0x7c:
		return "The system call level is not correct.";
		break;
	case 0x7d:
		return "The disk has no volume label.";
		break;
	case 0x7e:
		return "The specified module could not be found.";
		break;
	case 0x7f:
		return "The specified procedure could not be found.";
		break;
	case 0x80:
		return "There are no child processes to wait for.";
		break;
	case 0x81:
		return "The %1 application cannot be run in Win32 mode.";
		break;
	case 0x82:
		return "Attempt to use a file handle to an open disk partition for an operation other than raw disk I/O.";
		break;
	case 0x83:
		return "An attempt was made to move the file pointer before the beginning of the file.";
		break;
	case 0x84:
		return "The file pointer cannot be set on the specified device or file.";
		break;
	case 0x85:
		return "A JOIN or SUBST command cannot be used for a drive that contains previously joined drives.";
		break;
	case 0x86:
		return "An attempt was made to use a JOIN or SUBST command on a drive that has already been joined.";
		break;
	case 0x87:
		return "An attempt was made to use a JOIN or SUBST command on a drive that has already been substituted.";
		break;
	case 0x88:
		return "The system tried to delete the JOIN of a drive that is not joined.";
		break;
	case 0x89:
		return "The system tried to delete the substitution of a drive that is not substituted.";
		break;
	case 0x8a:
		return "The system tried to join a drive to a directory on a joined drive.";
		break;
	case 0x8b:
		return "The system tried to substitute a drive to a directory on a substituted drive.";
		break;
	case 0x8c:
		return "The system tried to join a drive to a directory on a substituted drive.";
		break;
	case 0x8d:
		return "The system tried to SUBST a drive to a directory on a joined drive.";
		break;
	case 0x8e:
		return "The system cannot perform a JOIN or SUBST at this time.";
		break;
	case 0x8f:
		return "The system cannot join or substitute a drive to or for a directory on the same drive.";
		break;
	case 0x90:
		return "The directory is not a subdirectory of the root directory.";
		break;
	case 0x91:
		return "The directory is not empty.";
		break;
	case 0x92:
		return "The path specified is being used in a substitute.";
		break;
	case 0x93:
		return "Not enough resources are available to process this command.";
		break;
	case 0x94:
		return "The path specified cannot be used at this time.";
		break;
	case 0x95:
		return "An attempt was made to join or substitute a drive for which a directory on the drive is the target of a previous substitute.";
		break;
	case 0x96:
		return "System trace information was not specified in your CONFIG.SYS file, or tracing is disallowed.";
		break;
	case 0x97:
		return "The number of specified semaphore events for DosMuxSemWait is not correct.";
		break;
	case 0x98:
		return "DosMuxSemWait did not execute; too many semaphores are already set.";
		break;
	case 0x99:
		return "The DosMuxSemWait list is not correct.";
		break;
	case 0x9a:
		return "The volume label you entered exceeds the label character limit of the destination file system.";
		break;
	case 0x9b:
		return "Cannot create another thread.";
		break;
	case 0x9c:
		return "The recipient process has refused the signal.";
		break;
	case 0x9d:
		return "The segment is already discarded and cannot be locked.";
		break;
	case 0x9e:
		return "The segment is already unlocked.";
		break;
	case 0x9f:
		return "The address for the thread ID is not correct.";
		break;
	case 0xa0:
		return "One or more arguments are not correct.";
		break;
	case 0xa1:
		return "The specified path is invalid.";
		break;
	case 0xa2:
		return "A signal is already pending.";
		break;
	case 0xa4:
		return "No more threads can be created in the system.";
		break;
	case 0xa7:
		return "Unable to lock a region of a file.";
		break;
	case 0xaa:
		return "The requested resource is in use.";
		break;
	case 0xad:
		return "A lock request was not outstanding for the supplied cancel region.";
		break;
	case 0xae:
		return "The file system does not support atomic changes to the lock type.";
		break;
	case 0xb4:
		return "The system detected a segment number that was not correct.";
		break;
	case 0xb6:
		return "The operating system cannot run %1.";
		break;
	case 0xb7:
		return "Cannot create a file when that file already exists.";
		break;
	case 0xba:
		return "The flag passed is not correct.";
		break;
	case 0xbb:
		return "The specified system semaphore name was not found.";
		break;
	case 0xbc:
		return "The operating system cannot run %1.";
		break;
	case 0xbd:
		return "The operating system cannot run %1.";
		break;
	case 0xbe:
		return "The operating system cannot run %1.";
		break;
	case 0xbf:
		return "Cannot run %1 in Win32 mode.";
		break;
	case 0xc0:
		return "The operating system cannot run %1.";
		break;
	case 0xc1:
		return "%1 is not a valid Win32 application.";
		break;
	case 0xc2:
		return "The operating system cannot run %1.";
		break;
	case 0xc3:
		return "The operating system cannot run %1.";
		break;
	case 0xc4:
		return "The operating system cannot run this application program.";
		break;
	case 0xc5:
		return "The operating system is not presently configured to run this application.";
		break;
	case 0xc6:
		return "The operating system cannot run %1.";
		break;
	case 0xc7:
		return "The operating system cannot run this application program.";
		break;
	case 0xc8:
		return "The code segment cannot be greater than or equal to 64 KB.";
		break;
	case 0xc9:
		return "The operating system cannot run %1.";
		break;
	case 0xca:
		return "The operating system cannot run %1.";
		break;
	case 0xcb:
		return "The system could not find the environment option that was entered.";
		break;
	case 0xcd:
		return "No process in the command subtree has a signal handler.";
		break;
	case 0xce:
		return "The file name or extension is too long.";
		break;
	case 0xcf:
		return "The ring 2 stack is in use.";
		break;
	case 0xd0:
		return "The asterisk (*) or question mark (?) global file name characters are entered incorrectly, or too many global file name characters are specified.";
		break;
	case 0xd1:
		return "The signal being posted is not correct.";
		break;
	case 0xd2:
		return "The signal handler cannot be set.";
		break;
	case 0xd4:
		return "The segment is locked and cannot be reallocated.";
		break;
	case 0xd6:
		return "Too many dynamic-link modules are attached to this program or dynamic-link module.";
		break;
	case 0xd7:
		return "Cannot nest calls to LoadModule.";
		break;
	case 0xd8:
		return "This version of %1 is not compatible with the version of Windows you're running. Check your computer's system information to see whether you need an x86 (32-bit) or x64 (64-bit) version of the program, and then contact the software publisher.";
		break;
	case 0xd9:
		return "The image file %1 is signed, unable to modify.";
		break;
	case 0xda:
		return "The image file %1 is strong signed, unable to modify.";
		break;
	case 0xdc:
		return "This file is checked out or locked for editing by another user.";
		break;
	case 0xdd:
		return "The file must be checked out before saving changes.";
		break;
	case 0xde:
		return "The file type being saved or retrieved has been blocked.";
		break;
	case 0xdf:
		return "The file size exceeds the limit allowed and cannot be saved.";
		break;
	case 0xe0:
		return "Access denied. Before opening files in this location, you must first browse to the website and select the option to sign in automatically.";
		break;
	case 0xe1:
		return "Operation did not complete successfully because the file contains a virus.";
		break;
	case 0xe2:
		return "This file contains a virus and cannot be opened. Due to the nature of this virus, the file has been removed from this location.";
		break;
	case 0xe5:
		return "The pipe is local.";
		break;
	case 0xe6:
		return "The pipe state is invalid.";
		break;
	case 0xe7:
		return "All pipe instances are busy.";
		break;
	case 0xe8:
		return "The pipe is being closed.";
		break;
	case 0xe9:
		return "No process is on the other end of the pipe.";
		break;
	case 0xea:
		return "More data is available.";
		break;
	case 0xf0:
		return "The session was canceled.";
		break;
	case 0xfe:
		return "The specified extended attribute name was invalid.";
		break;
	case 0xff:
		return "The extended attributes are inconsistent.";
		break;
	case 0x102:
		return "The wait operation timed out.";
		break;
	case 0x103:
		return "No more data is available.";
		break;
	case 0x10a:
		return "The copy functions cannot be used.";
		break;
	case 0x10b:
		return "The directory name is invalid.";
		break;
	case 0x113:
		return "The extended attributes did not fit in the buffer.";
		break;
	case 0x114:
		return "The extended attribute file on the mounted file system is corrupt.";
		break;
	case 0x115:
		return "The extended attribute table file is full.";
		break;
	case 0x116:
		return "The specified extended attribute handle is invalid.";
		break;
	case 0x11a:
		return "The mounted file system does not support extended attributes.";
		break;
	case 0x120:
		return "Attempt to release mutex not owned by caller.";
		break;
	case 0x12a:
		return "Too many posts were made to a semaphore.";
		break;
	case 0x12b:
		return "Only part of a ReadProcessMemory or WriteProcessMemory request was completed.";
		break;
	case 0x12c:
		return "The oplock request is denied.";
		break;
	case 0x12d:
		return "An invalid oplock acknowledgment was received by the system.";
		break;
	case 0x12e:
		return "The volume is too fragmented to complete this operation.";
		break;
	case 0x12f:
		return "The file cannot be opened because it is in the process of being deleted.";
		break;
	case 0x13d:
		return "The system cannot find message text for message number 0x%1 in the message file for %2.";
		break;
	case 0x13e:
		return "The scope specified was not found.";
		break;
	case 0x15e:
		return "No action was taken because a system reboot is required.";
		break;
	case 0x15f:
		return "The shutdown operation failed.";
		break;
	case 0x160:
		return "The restart operation failed.";
		break;
	case 0x161:
		return "The maximum number of sessions has been reached.";
		break;
	case 0x190:
		return "The thread is already in background processing mode.";
		break;
	case 0x191:
		return "The thread is not in background processing mode.";
		break;
	case 0x192:
		return "The process is already in background processing mode.";
		break;
	case 0x193:
		return "The process is not in background processing mode.";
		break;
	case 0x1e7:
		return "Attempt to access invalid address.";
		break;
	case 0x1f4:
		return "User profile cannot be loaded.";
		break;
	case 0x216:
		return "Arithmetic result exceeded 32 bits.";
		break;
	case 0x217:
		return "There is a process on the other end of the pipe.";
		break;
	case 0x218:
		return "Waiting for a process to open the other end of the pipe.";
		break;
	case 0x219:
		return "Application verifier has found an error in the current process.";
		break;
	case 0x21a:
		return "An error occurred in the ABIOS subsystem.";
		break;
	case 0x21b:
		return "A warning occurred in the WX86 subsystem.";
		break;
	case 0x21c:
		return "An error occurred in the WX86 subsystem.";
		break;
	case 0x21d:
		return "An attempt was made to cancel or set a timer that has an associated asynchronous procedure call (APC) and the subject thread is not the thread that originally set the timer with an associated APC routine.";
		break;
	case 0x21e:
		return "Unwind exception code.";
		break;
	case 0x21f:
		return "An invalid or unaligned stack was encountered during an unwind operation.";
		break;
	case 0x220:
		return "An invalid unwind target was encountered during an unwind operation.";
		break;
	case 0x221:
		return "Invalid object attributes specified to NtCreatePort or invalid port attributes specified to NtConnectPort.";
		break;
	case 0x222:
		return "Length of message passed to NtRequestPort or NtRequestWaitReplyPort was longer than the maximum message allowed by the port.";
		break;
	case 0x223:
		return "An attempt was made to lower a quota limit below the current usage.";
		break;
	case 0x224:
		return "An attempt was made to attach to a device that was already attached to another device.";
		break;
	case 0x225:
		return "An attempt was made to execute an instruction at an unaligned address, and the host system does not support unaligned instruction references.";
		break;
	case 0x226:
		return "Profiling not started.";
		break;
	case 0x227:
		return "Profiling not stopped.";
		break;
	case 0x228:
		return "The passed ACL did not contain the minimum required information.";
		break;
	case 0x229:
		return "The number of active profiling objects is at the maximum and no more can be started.";
		break;
	case 0x22a:
		return "Used to indicate that an operation cannot continue without blocking for I/O.";
		break;
	case 0x22b:
		return "Indicates that a thread attempted to terminate itself by default (called NtTerminateThread with NULL) and it was the last thread in the current process.";
		break;
	case 0x22c:
		return "If an MM error is returned that is not defined in the standard FsRtl filter, it is converted to one of the following errors that is guaranteed to be in the filter. In this case, information is lost; however, the filter correctly handles the exception.";
		break;
	case 0x22d:
		return "If an MM error is returned that is not defined in the standard FsRtl filter, it is converted to one of the following errors that is guaranteed to be in the filter. In this case, information is lost; however, the filter correctly handles the exception.";
		break;
	case 0x22e:
		return "If an MM error is returned that is not defined in the standard FsRtl filter, it is converted to one of the following errors that is guaranteed to be in the filter. In this case, information is lost; however, the filter correctly handles the exception.";
		break;
	case 0x22f:
		return "A malformed function table was encountered during an unwind operation.";
		break;
	case 0x230:
		return "Indicates that an attempt was made to assign protection to a file system file or directory and one of the SIDs in the security descriptor could not be translated into a GUID that could be stored by the file system. This causes the protection attempt to fail, which might cause a file creation attempt to fail.";
		break;
	case 0x231:
		return "Indicates that an attempt was made to grow a local domain table (LDT) by setting its size, or that the size was not an even number of selectors.";
		break;
	case 0x233:
		return "Indicates that the starting value for the LDT information was not an integral multiple of the selector size.";
		break;
	case 0x234:
		return "Indicates that the user supplied an invalid descriptor when trying to set up LDT descriptors.";
		break;
	case 0x235:
		return "Indicates a process has too many threads to perform the requested action. For example, assignment of a primary token can be performed only when a process has zero or one threads.";
		break;
	case 0x236:
		return "An attempt was made to operate on a thread within a specific process, but the thread specified is not in the process specified.";
		break;
	case 0x237:
		return "Page file quota was exceeded.";
		break;
	case 0x238:
		return "The Netlogon service cannot start because another Netlogon service running in the domain conflicts with the specified role.";
		break;
	case 0x239:
		return "On applicable Windows Server releases, the Security Accounts Manager (SAM) database is significantly out of synchronization with the copy on the domain controller. A complete synchronization is required.";
		break;
	case 0x23a:
		return "The NtCreateFile API failed. This error should never be returned to an application, it is a place holder for the Windows LAN Manager Redirector to use in its internal error mapping routines.";
		break;
	case 0x23b:
		return "{Privilege Failed} The I/O permissions for the process could not be changed.";
		break;
	case 0x23c:
		return "{Application Exit by CTRL+C} The application terminated as a result of a CTRL+C.";
		break;
	case 0x23d:
		return "{Missing System File} The required system file %hs is bad or missing.";
		break;
	case 0x23e:
		return "{Application Error} The exception %s (0x%08lx) occurred in the application at location 0x%08lx.";
		break;
	case 0x23f:
		return "{Application Error} The application failed to initialize properly (0x%lx). Click OK to terminate the application.";
		break;
	case 0x240:
		return "{Unable to Create Paging File} The creation of the paging file %hs failed (%lx). The requested size was %ld.";
		break;
	case 0x241:
		return "The hash for the image cannot be found in the system catalogs. The image is likely corrupt or the victim of tampering.";
		break;
	case 0x242:
		return "{No Paging File Specified} No paging file was specified in the system configuration.";
		break;
	case 0x243:
		return "{EXCEPTION} A real-mode application issued a floating-point instruction, and floating-point hardware is not present.";
		break;
	case 0x244:
		return "An event pair synchronization operation was performed using the thread-specific client/server event pair object, but no event pair object was associated with the thread.";
		break;
	case 0x245:
		return "A domain server has an incorrect configuration.";
		break;
	case 0x246:
		return "An illegal character was encountered. For a multibyte character set, this includes a lead byte without a succeeding trail byte. For the Unicode character set, this includes the characters 0xFFFF and 0xFFFE.";
		break;
	case 0x247:
		return "The Unicode character is not defined in the Unicode character set installed on the system.";
		break;
	case 0x248:
		return "The paging file cannot be created on a floppy disk.";
		break;
	case 0x249:
		return "The system bios failed to connect a system interrupt to the device or bus for which the device is connected.";
		break;
	case 0x24a:
		return "This operation is only allowed for the primary domain controller (PDC) of the domain.";
		break;
	case 0x24b:
		return "An attempt was made to acquire a mutant such that its maximum count would have been exceeded.";
		break;
	case 0x24c:
		return "A volume has been accessed for which a file system driver is required that has not yet been loaded.";
		break;
	case 0x24d:
		return "{Registry File Failure} The registry cannot load the hive (file): %hs or its log or alternate. It is corrupt, absent, or not writable.";
		break;
	case 0x24e:
		return "{Unexpected Failure in DebugActiveProcess} An unexpected failure occurred while processing a DebugActiveProcess API request. Choosing OK will terminate the process, and choosing Cancel will ignore the error.";
		break;
	case 0x24f:
		return "{Fatal System Error} The %hs system process terminated unexpectedly with a status of 0x%08x (0x%08x 0x%08x). The system has been shut down.";
		break;
	case 0x250:
		return "{Data Not Accepted} The transport driver interface (TDI) client could not handle the data received during an indication.";
		break;
	case 0x251:
		return "The NT Virtual DOS Machine (NTVDM) encountered a hard error.";
		break;
	case 0x252:
		return "{Cancel Timeout} The driver %hs failed to complete a canceled I/O request in the allotted time.";
		break;
	case 0x253:
		return "{Reply Message Mismatch} An attempt was made to reply to a local procedure call (LPC) message, but the thread specified by the client ID in the message was not waiting on that message.";
		break;
	case 0x254:
		return "{Delayed Write Failed} Windows was unable to save all the data for the file %hs. The data has been lost. This error might be caused by a failure of your computer hardware or network connection. Try to save this file elsewhere.";
		break;
	case 0x255:
		return "The parameters passed to the server in the client/server shared memory window were invalid. Too much data might have been put in the shared memory window.";
		break;
	case 0x256:
		return "The stream is not a tiny stream.";
		break;
	case 0x257:
		return "The request must be handled by the stack overflow code.";
		break;
	case 0x258:
		return "Internal OFS status codes indicating how an allocation operation is handled. Either it is retried after the containing onode is moved or the extent stream is converted to a large stream.";
		break;
	case 0x259:
		return "The attempt to find the object found an object matching by ID on the volume but it is out of the scope of the handle used for the operation.";
		break;
	case 0x25a:
		return "The bucket array must be grown. Retry transaction after doing so.";
		break;
	case 0x25b:
		return "The user/kernel marshaling buffer has overflowed.";
		break;
	case 0x25c:
		return "The supplied variant structure contains invalid data.";
		break;
	case 0x25d:
		return "The specified buffer contains ill-formed data.";
		break;
	case 0x25e:
		return "{Audit Failed} An attempt to generate a security audit failed.";
		break;
	case 0x25f:
		return "The timer resolution was not previously set by the current process.";
		break;
	case 0x260:
		return "There is insufficient account information to log you on.";
		break;
	case 0x261:
		return "{Invalid DLL Entrypoint} The dynamic link library %hs is not written correctly. The stack pointer has been left in an inconsistent state. The entry point should be declared as WINAPI or STDCALL. Select YES to fail the DLL load. Select NO to continue execution. Selecting NO can cause the application to operate incorrectly.";
		break;
	case 0x262:
		return "{Invalid Service Callback Entrypoint} The %hs service is not written correctly. The stack pointer has been left in an inconsistent state. The callback entry point should be declared as WINAPI or STDCALL. Selecting OK will cause the service to continue operation. However, the service process might operate incorrectly.";
		break;
	case 0x263:
		return "There is an IP address conflict with another system on the network.";
		break;
	case 0x264:
		return "There is an IP address conflict with another system on the network.";
		break;
	case 0x265:
		return "{Low On Registry Space} The system has reached the maximum size allowed for the system part of the registry. Additional storage requests will be ignored.";
		break;
	case 0x266:
		return "A callback return system service cannot be executed when no callback is active.";
		break;
	case 0x267:
		return "The password provided is too short to meet the policy of your user account. Choose a longer password.";
		break;
	case 0x268:
		return "The policy of your user account does not allow you to change passwords too frequently. This is done to prevent users from changing back to a familiar, but potentially discovered, password. If you feel your password has been compromised, contact your administrator immediately to have a new one assigned.";
		break;
	case 0x269:
		return "You have attempted to change your password to one that you have used in the past. The policy of your user account does not allow this. Select a password that you have not previously used.";
		break;
	case 0x26a:
		return "The specified compression format is unsupported.";
		break;
	case 0x26b:
		return "The specified hardware profile configuration is invalid.";
		break;
	case 0x26c:
		return "The specified Plug and Play registry device path is invalid.";
		break;
	case 0x26d:
		return "The specified quota list is internally inconsistent with its descriptor.";
		break;
	case 0x26e:
		return "{Windows Evaluation Notification} The evaluation period for this installation of Windows has expired. This system will shut down in 1 hour. To restore access to this installation of Windows, upgrade this installation using a licensed distribution of this product.";
		break;
	case 0x26f:
		return "{Illegal System DLL Relocation} The system DLL %hs was relocated in memory. The application will not run properly. The relocation occurred because the DLL %hs occupied an address range reserved for Windows system DLLs. The vendor supplying the DLL should be contacted for a new DLL.";
		break;
	case 0x270:
		return "{DLL Initialization Failed} The application failed to initialize because the window station is shutting down.";
		break;
	case 0x271:
		return "The validation process needs to continue on to the next step.";
		break;
	case 0x272:
		return "There are no more matches for the current index enumeration.";
		break;
	case 0x273:
		return "The range could not be added to the range list because of a conflict.";
		break;
	case 0x274:
		return "The server process is running under a SID different than that required by the client.";
		break;
	case 0x275:
		return "A group marked use for deny only cannot be enabled.";
		break;
	case 0x276:
		return "{EXCEPTION} Multiple floating point faults.";
		break;
	case 0x277:
		return "{EXCEPTION} Multiple floating point traps.";
		break;
	case 0x278:
		return "The requested interface is not supported.";
		break;
	case 0x279:
		return "{System Standby Failed} The driver %hs does not support standby mode. Updating this driver might allow the system to go to standby mode.";
		break;
	case 0x27a:
		return "The system file %1 has become corrupt and has been replaced.";
		break;
	case 0x27b:
		return "{Virtual Memory Minimum Too Low} Your system is low on virtual memory. Windows is increasing the size of your virtual memory paging file. During this process, memory requests for some applications might be denied. For more information, see Help.";
		break;
	case 0x27c:
		return "A device was removed so enumeration must be restarted.";
		break;
	case 0x27d:
		return "{Fatal System Error} The system image %s is not properly signed. The file has been replaced with the signed file. The system has been shut down.";
		break;
	case 0x27e:
		return "Device will not start without a reboot.";
		break;
	case 0x27f:
		return "There is not enough power to complete the requested operation.";
		break;
	case 0x281:
		return "The system is in the process of shutting down.";
		break;
	case 0x282:
		return "An attempt to remove a process DebugPort was made, but a port was not already associated with the process.";
		break;
	case 0x283:
		return "This version of Windows is not compatible with the behavior version of directory forest, domain, or domain controller.";
		break;
	case 0x284:
		return "The specified range could not be found in the range list.";
		break;
	case 0x286:
		return "The driver was not loaded because the system is booting into safe mode.";
		break;
	case 0x287:
		return "The driver was not loaded because it failed its initialization call.";
		break;
	case 0x288:
		return "The device encountered an error while applying power or reading the device configuration. This might be caused by a failure of your hardware or by a poor connection.";
		break;
	case 0x289:
		return "The create operation failed because the name contained at least one mount point that resolves to a volume to which the specified device object is not attached.";
		break;
	case 0x28a:
		return "The device object parameter is either not a valid device object or is not attached to the volume specified by the file name.";
		break;
	case 0x28b:
		return "A machine check error has occurred. Check the system event log for additional information.";
		break;
	case 0x28c:
		return "There was an error [%2] processing the driver database.";
		break;
	case 0x28d:
		return "The system hive size has exceeded its limit.";
		break;
	case 0x28e:
		return "The driver could not be loaded because a previous version of the driver is still in memory.";
		break;
	case 0x28f:
		return "{Volume Shadow Copy Service} Wait while the Volume Shadow Copy Service prepares volume %hs for hibernation.";
		break;
	case 0x290:
		return "The system has failed to hibernate (the error code is %hs). Hibernation will be disabled until the system is restarted.";
		break;
	case 0x299:
		return "The requested operation could not be completed due to a file system limitation.";
		break;
	case 0x29c:
		return "An assertion failure has occurred.";
		break;
	case 0x29d:
		return "An error occurred in the Advanced Configuration and Power Interface (ACPI) subsystem.";
		break;
	case 0x29e:
		return "WOW assertion error.";
		break;
	case 0x29f:
		return "A device is missing in the system BIOS MultiProcessor Specification (MPS) table. This device will not be used. Contact your system vendor for system BIOS update.";
		break;
	case 0x2a0:
		return "A translator failed to translate resources.";
		break;
	case 0x2a1:
		return "An interrupt request (IRQ) translator failed to translate resources.";
		break;
	case 0x2a2:
		return "Driver %2 returned invalid ID for a child device (%3).";
		break;
	case 0x2a3:
		return "{Kernel Debugger Awakened} the system debugger was awakened by an interrupt.";
		break;
	case 0x2a4:
		return "{Handles Closed} Handles to objects have been automatically closed because of the requested operation.";
		break;
	case 0x2a5:
		return "{Too Much Information} The specified ACL contained more information than was expected.";
		break;
	case 0x2a6:
		return "This warning level status indicates that the transaction state already exists for the registry subtree, but that a transaction commit was previously aborted. The commit has NOT been completed, but it has not been rolled back either (so it can still be committed if desired).";
		break;
	case 0x2a7:
		return "{Media Changed} The media might have changed.";
		break;
	case 0x2a8:
		return "{GUID Substitution} During the translation of a GUID to a Windows SID, no administratively defined GUID prefix was found. A substitute prefix was used, which will not compromise system security. However, this might provide more restrictive access than intended.";
		break;
	case 0x2a9:
		return "The create operation stopped after reaching a symbolic link.";
		break;
	case 0x2aa:
		return "A long jump has been executed.";
		break;
	case 0x2ab:
		return "The Plug and Play query operation was not successful.";
		break;
	case 0x2ac:
		return "A frame consolidation has been executed.";
		break;
	case 0x2ad:
		return "{Registry Hive Recovered} Registry hive (file): %hs was corrupted and it has been recovered. Some data might have been lost.";
		break;
	case 0x2ae:
		return "The application is attempting to run executable code from the module %hs. This might be insecure. An alternative, %hs, is available. Should the application use the secure module %hs?";
		break;
	case 0x2af:
		return "The application is loading executable code from the module %hs. This is secure, but might be incompatible with previous releases of the operating system. An alternative, %hs, is available. Should the application use the secure module %hs?";
		break;
	case 0x2b0:
		return "Debugger did not handle the exception.";
		break;
	case 0x2b1:
		return "Debugger will reply later.";
		break;
	case 0x2b2:
		return "Debugger cannot provide handle.";
		break;
	case 0x2b3:
		return "Debugger terminated thread.";
		break;
	case 0x2b4:
		return "Debugger terminated process.";
		break;
	case 0x2b5:
		return "Debugger got control C.";
		break;
	case 0x2b6:
		return "Debugger printed exception on control C.";
		break;
	case 0x2b7:
		return "Debugger received Routing Information Protocol (RIP) exception.";
		break;
	case 0x2b8:
		return "Debugger received control break.";
		break;
	case 0x2b9:
		return "Debugger command communication exception.";
		break;
	case 0x2ba:
		return "{Object Exists} An attempt was made to create an object and the object name already existed.";
		break;
	case 0x2bb:
		return "{Thread Suspended} A thread termination occurred while the thread was suspended. The thread was resumed and termination proceeded.";
		break;
	case 0x2bc:
		return "{Image Relocated} An image file could not be mapped at the address specified in the image file. Local fixes must be performed on this image.";
		break;
	case 0x2bd:
		return "This informational level status indicates that a specified registry subtree transaction state did not yet exist and had to be created.";
		break;
	case 0x2be:
		return "{Segment Load} A virtual DOS machine (VDM) is loading, unloading, or moving an MS-DOS or Win16 program segment image. An exception is raised so a debugger can load, unload, or track symbols and breakpoints within these 16-bit segments.";
		break;
	case 0x2bf:
		return "{Invalid Current Directory} The process cannot switch to the startup current directory %hs. Select OK to set current directory to %hs, or select CANCEL to exit.";
		break;
	case 0x2c0:
		return "{Redundant Read} To satisfy a read request, the NT fault-tolerant file system successfully read the requested data from a redundant copy. This was done because the file system encountered a failure on a member of the fault-tolerant volume, but it was unable to reassign the failing area of the device.";
		break;
	case 0x2c1:
		return "{Redundant Write} To satisfy a write request, the Windows NT operating system fault-tolerant file system successfully wrote a redundant copy of the information. This was done because the file system encountered a failure on a member of the fault-tolerant volume, but it was not able to reassign the failing area of the device.";
		break;
	case 0x2c2:
		return "{Machine Type Mismatch} The image file %hs is valid, but is for a machine type other than the current machine. Select OK to continue, or CANCEL to fail the DLL load.";
		break;
	case 0x2c3:
		return "{Partial Data Received} The network transport returned partial data to its client. The remaining data will be sent later.";
		break;
	case 0x2c4:
		return "{Expedited Data Received} The network transport returned data to its client that was marked as expedited by the remote system.";
		break;
	case 0x2c5:
		return "{Partial Expedited Data Received} The network transport returned partial data to its client and this data was marked as expedited by the remote system. The remaining data will be sent later.";
		break;
	case 0x2c6:
		return "{TDI Event Done} The TDI indication has completed successfully.";
		break;
	case 0x2c7:
		return "{TDI Event Pending} The TDI indication has entered the pending state.";
		break;
	case 0x2c8:
		return "Checking file system on %wZ.";
		break;
	case 0x2c9:
		return "{Fatal Application Exit} %hs.";
		break;
	case 0x2ca:
		return "The specified registry key is referenced by a predefined handle.";
		break;
	case 0x2cb:
		return "{Page Unlocked} The page protection of a locked page was changed to 'No Access' and the page was unlocked from memory and from the process.";
		break;
	case 0x2cd:
		return "{Page Locked} One of the pages to lock was already locked.";
		break;
	case 0x2cf:
		return "The value already corresponds with a Win 32 error code.";
		break;
	case 0x2d0:
		return "{Machine Type Mismatch} The image file %hs is valid, but is for a machine type other than the current machine.";
		break;
	case 0x2d1:
		return "A yield execution was performed and no thread was available to run.";
		break;
	case 0x2d2:
		return "The resume flag to a timer API was ignored.";
		break;
	case 0x2d3:
		return "The arbiter has deferred arbitration of these resources to its parent.";
		break;
	case 0x2d4:
		return "The inserted CardBus device cannot be started because of a configuration error on %hs\".\"";
		break;
	case 0x2d5:
		return "The CPUs in this multiprocessor system are not all the same revision level. To use all processors the operating system restricts itself to the features of the least capable processor in the system. If problems occur with this system, contact the CPU manufacturer to see if this mix of processors is supported.";
		break;
	case 0x2d6:
		return "The system was put into hibernation.";
		break;
	case 0x2d7:
		return "The system was resumed from hibernation.";
		break;
	case 0x2d8:
		return "Windows has detected that the system firmware (BIOS) was updated (previous firmware date = %2, current firmware date %3).";
		break;
	case 0x2d9:
		return "A device driver is leaking locked I/O pages, causing system degradation. The system has automatically enabled a tracking code to try and catch the culprit.";
		break;
	case 0x2da:
		return "The system has awoken.";
		break;
	case 0x2df:
		return "The call failed because the handle associated with it was closed.";
		break;
	case 0x2e4:
		return "The requested operation requires elevation.";
		break;
	case 0x2e5:
		return "A reparse should be performed by the object manager because the name of the file resulted in a symbolic link.";
		break;
	case 0x2e6:
		return "An open/create operation completed while an oplock break is underway.";
		break;
	case 0x2e7:
		return "A new volume has been mounted by a file system.";
		break;
	case 0x2e8:
		return "This success level status indicates that the transaction state already exists for the registry subtree, but that a transaction commit was previously aborted. The commit has now been completed.";
		break;
	case 0x2e9:
		return "This indicates that a notify change request has been completed due to closing the handle which made the notify change request.";
		break;
	case 0x2ea:
		return "{Connect Failure on Primary Transport} An attempt was made to connect to the remote server %hs on the primary transport, but the connection failed. The computer was able to connect on a secondary transport.";
		break;
	case 0x2eb:
		return "Page fault was a transition fault.";
		break;
	case 0x2ec:
		return "Page fault was a demand zero fault.";
		break;
	case 0x2ed:
		return "Page fault was a demand zero fault.";
		break;
	case 0x2ee:
		return "Page fault was a demand zero fault.";
		break;
	case 0x2ef:
		return "Page fault was satisfied by reading from a secondary storage device.";
		break;
	case 0x2f0:
		return "Cached page was locked during operation.";
		break;
	case 0x2f1:
		return "Crash dump exists in paging file.";
		break;
	case 0x2f2:
		return "Specified buffer contains all zeros.";
		break;
	case 0x2f3:
		return "A reparse should be performed by the object manager because the name of the file resulted in a symbolic link.";
		break;
	case 0x2f4:
		return "The device has succeeded a query-stop and its resource requirements have changed.";
		break;
	case 0x2f5:
		return "The translator has translated these resources into the global space and no further translations should be performed.";
		break;
	case 0x2f6:
		return "A process being terminated has no threads to terminate.";
		break;
	case 0x2f7:
		return "The specified process is not part of a job.";
		break;
	case 0x2f8:
		return "The specified process is part of a job.";
		break;
	case 0x2f9:
		return "{Volume Shadow Copy Service} The system is now ready for hibernation.";
		break;
	case 0x2fa:
		return "A file system or file system filter driver has successfully completed an FsFilter operation.";
		break;
	case 0x2fb:
		return "The specified interrupt vector was already connected.";
		break;
	case 0x2fc:
		return "The specified interrupt vector is still connected.";
		break;
	case 0x2fd:
		return "An operation is blocked waiting for an oplock.";
		break;
	case 0x2fe:
		return "Debugger handled exception.";
		break;
	case 0x2ff:
		return "Debugger continued.";
		break;
	case 0x300:
		return "An exception occurred in a user mode callback and the kernel callback frame should be removed.";
		break;
	case 0x301:
		return "Compression is disabled for this volume.";
		break;
	case 0x302:
		return "The data provider cannot fetch backward through a result set.";
		break;
	case 0x303:
		return "The data provider cannot scroll backward through a result set.";
		break;
	case 0x304:
		return "The data provider requires that previously fetched data is released before asking for more data.";
		break;
	case 0x305:
		return "The data provider was not able to interpret the flags set for a column binding in an accessor.";
		break;
	case 0x306:
		return "One or more errors occurred while processing the request.";
		break;
	case 0x307:
		return "The implementation is not capable of performing the request.";
		break;
	case 0x308:
		return "The client of a component requested an operation that is not valid given the state of the component instance.";
		break;
	case 0x309:
		return "A version number could not be parsed.";
		break;
	case 0x30a:
		return "The iterator's start position is invalid.";
		break;
	case 0x30b:
		return "The hardware has reported an uncorrectable memory error.";
		break;
	case 0x30c:
		return "The attempted operation required self-healing to be enabled.";
		break;
	case 0x30d:
		return "The Desktop heap encountered an error while allocating session memory. There is more information in the system event log.";
		break;
	case 0x30e:
		return "The system power state is transitioning from %2 to %3.";
		break;
	case 0x30f:
		return "The system power state is transitioning from %2 to %3 but could enter %4.";
		break;
	case 0x310:
		return "A thread is getting dispatched with MCA EXCEPTION because of MCA.";
		break;
	case 0x311:
		return "Access to %1 is monitored by policy rule %2.";
		break;
	case 0x312:
		return "Access to %1 has been restricted by your administrator by policy rule %2.";
		break;
	case 0x313:
		return "A valid hibernation file has been invalidated and should be abandoned.";
		break;
	case 0x314:
		return "{Delayed Write Failed} Windows was unable to save all the data for the file %hs; the data has been lost. This error can be caused by network connectivity issues. Try to save this file elsewhere.";
		break;
	case 0x315:
		return "{Delayed Write Failed} Windows was unable to save all the data for the file %hs; the data has been lost. This error was returned by the server on which the file exists. Try to save this file elsewhere.";
		break;
	case 0x316:
		return "{Delayed Write Failed} Windows was unable to save all the data for the file %hs; the data has been lost. This error can be caused if the device has been removed or the media is write-protected.";
		break;
	case 0x3e2:
		return "Access to the extended attribute was denied.";
		break;
	case 0x3e3:
		return "The I/O operation has been aborted because of either a thread exit or an application request.";
		break;
	case 0x3e4:
		return "Overlapped I/O event is not in a signaled state.";
		break;
	case 0x3e5:
		return "Overlapped I/O operation is in progress.";
		break;
	case 0x3e6:
		return "Invalid access to memory location.";
		break;
	case 0x3e7:
		return "Error performing in-page operation.";
		break;
	case 0x3e9:
		return "Recursion too deep; the stack overflowed.";
		break;
	case 0x3ea:
		return "The window cannot act on the sent message.";
		break;
	case 0x3eb:
		return "Cannot complete this function.";
		break;
	case 0x3ec:
		return "Invalid flags.";
		break;
	case 0x3ed:
		return "The volume does not contain a recognized file system. Be sure that all required file system drivers are loaded and that the volume is not corrupted.";
		break;
	case 0x3ee:
		return "The volume for a file has been externally altered so that the opened file is no longer valid.";
		break;
	case 0x3ef:
		return "The requested operation cannot be performed in full-screen mode.";
		break;
	case 0x3f0:
		return "An attempt was made to reference a token that does not exist.";
		break;
	case 0x3f1:
		return "The configuration registry database is corrupt.";
		break;
	case 0x3f2:
		return "The configuration registry key is invalid.";
		break;
	case 0x3f3:
		return "The configuration registry key could not be opened.";
		break;
	case 0x3f4:
		return "The configuration registry key could not be read.";
		break;
	case 0x3f5:
		return "The configuration registry key could not be written.";
		break;
	case 0x3f6:
		return "One of the files in the registry database had to be recovered by use of a log or alternate copy. The recovery was successful.";
		break;
	case 0x3f7:
		return "The registry is corrupted. The structure of one of the files containing registry data is corrupted, or the system's memory image of the file is corrupted, or the file could not be recovered because the alternate copy or log was absent or corrupted.";
		break;
	case 0x3f8:
		return "An I/O operation initiated by the registry failed and cannot be recovered. The registry could not read in, write out, or flush one of the files that contain the system's image of the registry.";
		break;
	case 0x3f9:
		return "The system attempted to load or restore a file into the registry, but the specified file is not in a registry file format.";
		break;
	case 0x3fa:
		return "Illegal operation attempted on a registry key that has been marked for deletion.";
		break;
	case 0x3fb:
		return "System could not allocate the required space in a registry log.";
		break;
	case 0x3fc:
		return "Cannot create a symbolic link in a registry key that already has subkeys or values.";
		break;
	case 0x3fd:
		return "Cannot create a stable subkey under a volatile parent key.";
		break;
	case 0x3fe:
		return "A notify change request is being completed and the information is not being returned in the caller's buffer. The caller now needs to enumerate the files to find the changes.";
		break;
	case 0x41b:
		return "A stop control has been sent to a service that other running services are dependent on.";
		break;
	case 0x41c:
		return "The requested control is not valid for this service.";
		break;
	case 0x41d:
		return "The service did not respond to the start or control request in a timely fashion.";
		break;
	case 0x41e:
		return "A thread could not be created for the service.";
		break;
	case 0x41f:
		return "The service database is locked.";
		break;
	case 0x420:
		return "An instance of the service is already running.";
		break;
	case 0x421:
		return "The account name is invalid or does not exist, or the password is invalid for the account name specified.";
		break;
	case 0x422:
		return "The service cannot be started, either because it is disabled or because it has no enabled devices associated with it.";
		break;
	case 0x423:
		return "Circular service dependency was specified.";
		break;
	case 0x424:
		return "The specified service does not exist as an installed service.";
		break;
	case 0x425:
		return "The service cannot accept control messages at this time.";
		break;
	case 0x426:
		return "The service has not been started.";
		break;
	case 0x427:
		return "The service process could not connect to the service controller.";
		break;
	case 0x428:
		return "An exception occurred in the service when handling the control request.";
		break;
	case 0x429:
		return "The database specified does not exist.";
		break;
	case 0x42a:
		return "The service has returned a service-specific error code.";
		break;
	case 0x42b:
		return "The process terminated unexpectedly.";
		break;
	case 0x42c:
		return "The dependency service or group failed to start.";
		break;
	case 0x42d:
		return "The service did not start due to a logon failure.";
		break;
	case 0x42e:
		return "After starting, the service stopped responding in a start-pending state.";
		break;
	case 0x42f:
		return "The specified service database lock is invalid.";
		break;
	case 0x430:
		return "The specified service has been marked for deletion.";
		break;
	case 0x431:
		return "The specified service already exists.";
		break;
	case 0x432:
		return "The system is currently running with the last-known-good configuration.";
		break;
	case 0x433:
		return "The dependency service does not exist or has been marked for deletion.";
		break;
	case 0x434:
		return "The current boot has already been accepted for use as the last-known-good control set.";
		break;
	case 0x435:
		return "No attempts to start the service have been made since the last boot.";
		break;
	case 0x436:
		return "The name is already in use as either a service name or a service display name.";
		break;
	case 0x437:
		return "The account specified for this service is different from the account specified for other services running in the same process.";
		break;
	case 0x438:
		return "Failure actions can only be set for Win32 services, not for drivers.";
		break;
	case 0x439:
		return "This service runs in the same process as the service control manager. Therefore, the service control manager cannot take action if this service's process terminates unexpectedly.";
		break;
	case 0x43a:
		return "No recovery program has been configured for this service.";
		break;
	case 0x43b:
		return "The executable program that this service is configured to run in does not implement the service.";
		break;
	case 0x43c:
		return "This service cannot be started in Safe Mode.";
		break;
	case 0x44c:
		return "The physical end of the tape has been reached.";
		break;
	case 0x44d:
		return "A tape access reached a filemark.";
		break;
	case 0x44e:
		return "The beginning of the tape or a partition was encountered.";
		break;
	case 0x44f:
		return "A tape access reached the end of a set of files.";
		break;
	case 0x450:
		return "No more data is on the tape.";
		break;
	case 0x451:
		return "Tape could not be partitioned.";
		break;
	case 0x452:
		return "When accessing a new tape of a multivolume partition, the current block size is incorrect.";
		break;
	case 0x453:
		return "Tape partition information could not be found when loading a tape.";
		break;
	case 0x454:
		return "Unable to lock the media eject mechanism.";
		break;
	case 0x455:
		return "Unable to unload the media.";
		break;
	case 0x456:
		return "The media in the drive might have changed.";
		break;
	case 0x457:
		return "The I/O bus was reset.";
		break;
	case 0x458:
		return "No media in drive.";
		break;
	case 0x459:
		return "No mapping for the Unicode character exists in the target multibyte code page.";
		break;
	case 0x45a:
		return "A DLL initialization routine failed.";
		break;
	case 0x45b:
		return "A system shutdown is in progress.";
		break;
	case 0x45c:
		return "Unable to abort the system shutdown because no shutdown was in progress.";
		break;
	case 0x45d:
		return "The request could not be performed because of an I/O device error.";
		break;
	case 0x45e:
		return "No serial device was successfully initialized. The serial driver will unload.";
		break;
	case 0x45f:
		return "Unable to open a device that was sharing an IRQ with other devices. At least one other device that uses that IRQ was already opened.";
		break;
	case 0x460:
		return "A serial I/O operation was completed by another write to the serial port. (The IOCTL_SERIAL_XOFF_COUNTER reached zero.)";
		break;
	case 0x461:
		return "A serial I/O operation completed because the time-out period expired. (The IOCTL_SERIAL_XOFF_COUNTER did not reach zero.)";
		break;
	case 0x462:
		return "No ID address mark was found on the floppy disk.";
		break;
	case 0x463:
		return "Mismatch between the floppy disk sector ID field and the floppy disk controller track address.";
		break;
	case 0x464:
		return "The floppy disk controller reported an error that is not recognized by the floppy disk driver.";
		break;
	case 0x465:
		return "The floppy disk controller returned inconsistent results in its registers.";
		break;
	case 0x466:
		return "While accessing the hard disk, a recalibrate operation failed, even after retries.";
		break;
	case 0x467:
		return "While accessing the hard disk, a disk operation failed even after retries.";
		break;
	case 0x468:
		return "While accessing the hard disk, a disk controller reset was needed, but that also failed.";
		break;
	case 0x469:
		return "Physical end of tape encountered.";
		break;
	case 0x46a:
		return "Not enough server storage is available to process this command.";
		break;
	case 0x46b:
		return "A potential deadlock condition has been detected.";
		break;
	case 0x46c:
		return "The base address or the file offset specified does not have the proper alignment.";
		break;
	case 0x474:
		return "An attempt to change the system power state was vetoed by another application or driver.";
		break;
	case 0x475:
		return "The system BIOS failed an attempt to change the system power state.";
		break;
	case 0x476:
		return "An attempt was made to create more links on a file than the file system supports.";
		break;
	case 0x47e:
		return "The specified program requires a newer version of Windows.";
		break;
	case 0x47f:
		return "The specified program is not a Windows or MS-DOS program.";
		break;
	case 0x480:
		return "Cannot start more than one instance of the specified program.";
		break;
	case 0x481:
		return "The specified program was written for an earlier version of Windows.";
		break;
	case 0x482:
		return "One of the library files needed to run this application is damaged.";
		break;
	case 0x483:
		return "No application is associated with the specified file for this operation.";
		break;
	case 0x484:
		return "An error occurred in sending the command to the application.";
		break;
	case 0x485:
		return "One of the library files needed to run this application cannot be found.";
		break;
	case 0x486:
		return "The current process has used all of its system allowance of handles for Windows manager objects.";
		break;
	case 0x487:
		return "The message can be used only with synchronous operations.";
		break;
	case 0x488:
		return "The indicated source element has no media.";
		break;
	case 0x489:
		return "The indicated destination element already contains media.";
		break;
	case 0x48a:
		return "The indicated element does not exist.";
		break;
	case 0x48b:
		return "The indicated element is part of a magazine that is not present.";
		break;
	case 0x48c:
		return "The indicated device requires re-initialization due to hardware errors.";
		break;
	case 0x48d:
		return "The device has indicated that cleaning is required before further operations are attempted.";
		break;
	case 0x48e:
		return "The device has indicated that its door is open.";
		break;
	case 0x48f:
		return "The device is not connected.";
		break;
	case 0x490:
		return "Element not found.";
		break;
	case 0x491:
		return "There was no match for the specified key in the index.";
		break;
	case 0x492:
		return "The property set specified does not exist on the object.";
		break;
	case 0x493:
		return "The point passed to GetMouseMovePoints is not in the buffer.";
		break;
	case 0x494:
		return "The tracking (workstation) service is not running.";
		break;
	case 0x495:
		return "The volume ID could not be found.";
		break;
	case 0x497:
		return "Unable to remove the file to be replaced.";
		break;
	case 0x498:
		return "Unable to move the replacement file to the file to be replaced. The file to be replaced has retained its original name.";
		break;
	case 0x499:
		return "Unable to move the replacement file to the file to be replaced. The file to be replaced has been renamed using the backup name.";
		break;
	case 0x49a:
		return "The volume change journal is being deleted.";
		break;
	case 0x49b:
		return "The volume change journal is not active.";
		break;
	case 0x49c:
		return "A file was found, but it might not be the correct file.";
		break;
	case 0x49d:
		return "The journal entry has been deleted from the journal.";
		break;
	case 0x4a6:
		return "A system shutdown has already been scheduled.";
		break;
	case 0x4a7:
		return "The system shutdown cannot be initiated because there are other users logged on to the computer.";
		break;
	case 0x4b0:
		return "The specified device name is invalid.";
		break;
	case 0x4b1:
		return "The device is not currently connected but it is a remembered connection.";
		break;
	case 0x4b2:
		return "The local device name has a remembered connection to another network resource.";
		break;
	case 0x4b3:
		return "The network path was either typed incorrectly, does not exist, or the network provider is not currently available. Try retyping the path or contact your network administrator.";
		break;
	case 0x4b4:
		return "The specified network provider name is invalid.";
		break;
	case 0x4b5:
		return "Unable to open the network connection profile.";
		break;
	case 0x4b6:
		return "The network connection profile is corrupted.";
		break;
	case 0x4b7:
		return "Cannot enumerate a noncontainer.";
		break;
	case 0x4b8:
		return "An extended error has occurred.";
		break;
	case 0x4b9:
		return "The format of the specified group name is invalid.";
		break;
	case 0x4ba:
		return "The format of the specified computer name is invalid.";
		break;
	case 0x4bb:
		return "The format of the specified event name is invalid.";
		break;
	case 0x4bc:
		return "The format of the specified domain name is invalid.";
		break;
	case 0x4bd:
		return "The format of the specified service name is invalid.";
		break;
	case 0x4be:
		return "The format of the specified network name is invalid.";
		break;
	case 0x4bf:
		return "The format of the specified share name is invalid.";
		break;
	case 0x4c0:
		return "The format of the specified password is invalid.";
		break;
	case 0x4c1:
		return "The format of the specified message name is invalid.";
		break;
	case 0x4c2:
		return "The format of the specified message destination is invalid.";
		break;
	case 0x4c3:
		return "Multiple connections to a server or shared resource by the same user, using more than one user name, are not allowed. Disconnect all previous connections to the server or shared resource and try again.";
		break;
	case 0x4c4:
		return "An attempt was made to establish a session to a network server, but there are already too many sessions established to that server.";
		break;
	case 0x4c5:
		return "The workgroup or domain name is already in use by another computer on the network.";
		break;
	case 0x4c6:
		return "The network is not present or not started.";
		break;
	case 0x4c7:
		return "The operation was canceled by the user.";
		break;
	case 0x4c8:
		return "The requested operation cannot be performed on a file with a user-mapped section open.";
		break;
	case 0x4c9:
		return "The remote system refused the network connection.";
		break;
	case 0x4ca:
		return "The network connection was gracefully closed.";
		break;
	case 0x4cb:
		return "The network transport endpoint already has an address associated with it.";
		break;
	case 0x4cc:
		return "An address has not yet been associated with the network endpoint.";
		break;
	case 0x4cd:
		return "An operation was attempted on a nonexistent network connection.";
		break;
	case 0x4ce:
		return "An invalid operation was attempted on an active network connection.";
		break;
	case 0x4cf:
		return "The network location cannot be reached. For information about network troubleshooting, see Windows Help.";
		break;
	case 0x4d0:
		return "The network location cannot be reached. For information about network troubleshooting, see Windows Help.";
		break;
	case 0x4d1:
		return "The network location cannot be reached. For information about network troubleshooting, see Windows Help.";
		break;
	case 0x4d2:
		return "No service is operating at the destination network endpoint on the remote system.";
		break;
	case 0x4d3:
		return "The request was aborted.";
		break;
	case 0x4d4:
		return "The network connection was aborted by the local system.";
		break;
	case 0x4d5:
		return "The operation could not be completed. A retry should be performed.";
		break;
	case 0x4d6:
		return "A connection to the server could not be made because the limit on the number of concurrent connections for this account has been reached.";
		break;
	case 0x4d7:
		return "Attempting to log on during an unauthorized time of day for this account.";
		break;
	case 0x4d8:
		return "The account is not authorized to log on from this station.";
		break;
	case 0x4d9:
		return "The network address could not be used for the operation requested.";
		break;
	case 0x4da:
		return "The service is already registered.";
		break;
	case 0x4db:
		return "The specified service does not exist.";
		break;
	case 0x4dc:
		return "The operation being requested was not performed because the user has not been authenticated.";
		break;
	case 0x4dd:
		return "The operation being requested was not performed because the user has not logged on to the network. The specified service does not exist.";
		break;
	case 0x4de:
		return "Continue with work in progress.";
		break;
	case 0x4df:
		return "An attempt was made to perform an initialization operation when initialization has already been completed.";
		break;
	case 0x4e0:
		return "No more local devices.";
		break;
	case 0x4e1:
		return "The specified site does not exist.";
		break;
	case 0x4e2:
		return "A domain controller with the specified name already exists.";
		break;
	case 0x4e3:
		return "This operation is supported only when you are connected to the server.";
		break;
	case 0x4e4:
		return "The group policy framework should call the extension even if there are no changes.";
		break;
	case 0x4e5:
		return "The specified user does not have a valid profile.";
		break;
	case 0x4e6:
		return "This operation is not supported on a computer running Windows Server 2003 operating system for Small Business Server.";
		break;
	case 0x4e7:
		return "The server machine is shutting down.";
		break;
	case 0x4e8:
		return "The remote system is not available. For information about network troubleshooting, see Windows Help.";
		break;
	case 0x4e9:
		return "The security identifier provided is not from an account domain.";
		break;
	case 0x4ea:
		return "The security identifier provided does not have a domain component.";
		break;
	case 0x4eb:
		return "AppHelp dialog canceled, thus preventing the application from starting.";
		break;
	case 0x4ec:
		return "This program is blocked by Group Policy. For more information, contact your system administrator.";
		break;
	case 0x4ed:
		return "A program attempt to use an invalid register value. Normally caused by an uninitialized register. This error is Itanium specific.";
		break;
	case 0x4ee:
		return "The share is currently offline or does not exist.";
		break;
	case 0x4ef:
		return "The Kerberos protocol encountered an error while validating the KDC certificate during smartcard logon. There is more information in the system event log.";
		break;
	case 0x4f0:
		return "The Kerberos protocol encountered an error while attempting to utilize the smartcard subsystem.";
		break;
	case 0x4f1:
		return "The system detected a possible attempt to compromise security. Ensure that you can contact the server that authenticated you.";
		break;
	case 0x4f7:
		return "The machine is locked and cannot be shut down without the force option.";
		break;
	case 0x4f9:
		return "An application-defined callback gave invalid data when called.";
		break;
	case 0x4fa:
		return "The Group Policy framework should call the extension in the synchronous foreground policy refresh.";
		break;
	case 0x4fb:
		return "This driver has been blocked from loading.";
		break;
	case 0x4fc:
		return "A DLL referenced a module that was neither a DLL nor the process's executable image.";
		break;
	case 0x4fd:
		return "Windows cannot open this program because it has been disabled.";
		break;
	case 0x4fe:
		return "Windows cannot open this program because the license enforcement system has been tampered with or become corrupted.";
		break;
	case 0x4ff:
		return "A transaction recover failed.";
		break;
	case 0x500:
		return "The current thread has already been converted to a fiber.";
		break;
	case 0x501:
		return "The current thread has already been converted from a fiber.";
		break;
	case 0x502:
		return "The system detected an overrun of a stack-based buffer in this application. This overrun could potentially allow a malicious user to gain control of this application.";
		break;
	case 0x503:
		return "Data present in one of the parameters is more than the function can operate on.";
		break;
	case 0x504:
		return "An attempt to perform an operation on a debug object failed because the object is in the process of being deleted.";
		break;
	case 0x505:
		return "An attempt to delay-load a .dll or get a function address in a delay-loaded .dll failed.";
		break;
	case 0x506:
		return "%1 is a 16-bit application. You do not have permissions to execute 16-bit applications. Check your permissions with your system administrator.";
		break;
	case 0x507:
		return "Insufficient information exists to identify the cause of failure.";
		break;
	case 0x508:
		return "The parameter passed to a C runtime function is incorrect.";
		break;
	case 0x509:
		return "The operation occurred beyond the valid data length of the file.";
		break;
	case 0x50a:
		return "The service start failed because one or more services in the same process have an incompatible service SID type setting. A service with a restricted service SID type can only coexist in the same process with other services with a restricted SID type.";
		break;
	case 0x50b:
		return "The process hosting the driver for this device has been terminated.";
		break;
	case 0x50c:
		return "An operation attempted to exceed an implementation-defined limit.";
		break;
	case 0x50d:
		return "Either the target process, or the target thread's containing process, is a protected process.";
		break;
	case 0x50e:
		return "The service notification client is lagging too far behind the current state of services in the machine.";
		break;
	case 0x50f:
		return "An operation failed because the storage quota was exceeded.";
		break;
	case 0x510:
		return "An operation failed because the content was blocked.";
		break;
	case 0x511:
		return "A privilege that the service requires to function properly does not exist in the service account configuration. The Services Microsoft Management Console (MMC) snap-in (Services.msc) and the Local Security Settings MMC snap-in (Secpol.msc) can be used to view the service configuration and the account configuration.";
		break;
	case 0x513:
		return "Indicates a particular SID cannot be assigned as the label of an object.";
		break;
	case 0x514:
		return "Not all privileges or groups referenced are assigned to the caller.";
		break;
	case 0x515:
		return "Some mapping between account names and SIDs was not done.";
		break;
	case 0x516:
		return "No system quota limits are specifically set for this account.";
		break;
	case 0x517:
		return "No encryption key is available. A well-known encryption key was returned.";
		break;
	case 0x518:
		return "The password is too complex to be converted to a LAN Manager password. The LAN Manager password returned is a null string.";
		break;
	case 0x519:
		return "The revision level is unknown.";
		break;
	case 0x51a:
		return "Indicates two revision levels are incompatible.";
		break;
	case 0x51b:
		return "This SID cannot be assigned as the owner of this object. 0x0000051C ERROR_INVALID_PRIMARY_GROUP This SID cannot be assigned as the primary group of an object.";
		break;
	case 0x51d:
		return "An attempt has been made to operate on an impersonation token by a thread that is not currently impersonating a client.";
		break;
	case 0x51e:
		return "The group cannot be disabled.";
		break;
	case 0x51f:
		return "There are currently no logon servers available to service the logon request.";
		break;
	case 0x520:
		return "A specified logon session does not exist. It might already have been terminated.";
		break;
	case 0x521:
		return "A specified privilege does not exist.";
		break;
	case 0x522:
		return "A required privilege is not held by the client.";
		break;
	case 0x523:
		return "The name provided is not a properly formed account name.";
		break;
	case 0x524:
		return "The specified account already exists.";
		break;
	case 0x525:
		return "The specified account does not exist.";
		break;
	case 0x526:
		return "The specified group already exists.";
		break;
	case 0x527:
		return "The specified group does not exist.";
		break;
	case 0x528:
		return "Either the specified user account is already a member of the specified group, or the specified group cannot be deleted because it contains a member.";
		break;
	case 0x529:
		return "The specified user account is not a member of the specified group account.";
		break;
	case 0x52a:
		return "The last remaining administration account cannot be disabled or deleted.";
		break;
	case 0x52b:
		return "Unable to update the password. The value provided as the current password is incorrect.";
		break;
	case 0x52c:
		return "Unable to update the password. The value provided for the new password contains values that are not allowed in passwords.";
		break;
	case 0x52d:
		return "Unable to update the password. The value provided for the new password does not meet the length, complexity, or history requirements of the domain.";
		break;
	case 0x52e:
		return "Logon failure: Unknown user name or bad password.";
		break;
	case 0x52f:
		return "Logon failure: User account restriction. Possible reasons are blank passwords not allowed, logon hour restrictions, or a policy restriction has been enforced.";
		break;
	case 0x530:
		return "Logon failure: Account logon time restriction violation.";
		break;
	case 0x531:
		return "Logon failure: User not allowed to log on to this computer.";
		break;
	case 0x532:
		return "Logon failure: The specified account password has expired.";
		break;
	case 0x533:
		return "Logon failure: Account currently disabled.";
		break;
	case 0x534:
		return "No mapping between account names and SIDs was done.";
		break;
	case 0x535:
		return "Too many local user identifiers (LUIDs) were requested at one time.";
		break;
	case 0x536:
		return "No more LUIDs are available.";
		break;
	case 0x537:
		return "The sub-authority part of an SID is invalid for this particular use.";
		break;
	case 0x538:
		return "The ACL structure is invalid.";
		break;
	case 0x539:
		return "The SID structure is invalid.";
		break;
	case 0x53a:
		return "The security descriptor structure is invalid.";
		break;
	case 0x53c:
		return "The inherited ACL or ACE could not be built.";
		break;
	case 0x53d:
		return "The server is currently disabled.";
		break;
	case 0x53e:
		return "The server is currently enabled.";
		break;
	case 0x53f:
		return "The value provided was an invalid value for an identifier authority.";
		break;
	case 0x540:
		return "No more memory is available for security information updates.";
		break;
	case 0x541:
		return "The specified attributes are invalid, or incompatible with the attributes for the group as a whole.";
		break;
	case 0x542:
		return "Either a required impersonation level was not provided, or the provided impersonation level is invalid.";
		break;
	case 0x543:
		return "Cannot open an anonymous level security token.";
		break;
	case 0x544:
		return "The validation information class requested was invalid.";
		break;
	case 0x545:
		return "The type of the token is inappropriate for its attempted use.";
		break;
	case 0x546:
		return "Unable to perform a security operation on an object that has no associated security.";
		break;
	case 0x547:
		return "Configuration information could not be read from the domain controller, either because the machine is unavailable, or access has been denied.";
		break;
	case 0x548:
		return "The SAM or local security authority (LSA) server was in the wrong state to perform the security operation.";
		break;
	case 0x549:
		return "The domain was in the wrong state to perform the security operation.";
		break;
	case 0x54a:
		return "This operation is only allowed for the PDC of the domain.";
		break;
	case 0x54b:
		return "The specified domain either does not exist or could not be contacted.";
		break;
	case 0x54c:
		return "The specified domain already exists.";
		break;
	case 0x54d:
		return "An attempt was made to exceed the limit on the number of domains per server.";
		break;
	case 0x54e:
		return "Unable to complete the requested operation because of either a catastrophic media failure or a data structure corruption on the disk.";
		break;
	case 0x54f:
		return "An internal error occurred.";
		break;
	case 0x550:
		return "Generic access types were contained in an access mask that should already be mapped to nongeneric types.";
		break;
	case 0x551:
		return "A security descriptor is not in the right format (absolute or self-relative).";
		break;
	case 0x552:
		return "The requested action is restricted for use by logon processes only. The calling process has not registered as a logon process.";
		break;
	case 0x553:
		return "Cannot start a new logon session with an ID that is already in use.";
		break;
	case 0x554:
		return "A specified authentication package is unknown.";
		break;
	case 0x555:
		return "The logon session is not in a state that is consistent with the requested operation.";
		break;
	case 0x556:
		return "The logon session ID is already in use.";
		break;
	case 0x557:
		return "A logon request contained an invalid logon type value.";
		break;
	case 0x558:
		return "Unable to impersonate using a named pipe until data has been read from that pipe.";
		break;
	case 0x559:
		return "The transaction state of a registry subtree is incompatible with the requested operation.";
		break;
	case 0x55a:
		return "An internal security database corruption has been encountered.";
		break;
	case 0x55b:
		return "Cannot perform this operation on built-in accounts.";
		break;
	case 0x55c:
		return "Cannot perform this operation on this built-in special group.";
		break;
	case 0x55d:
		return "Cannot perform this operation on this built-in special user.";
		break;
	case 0x55e:
		return "The user cannot be removed from a group because the group is currently the user's primary group.";
		break;
	case 0x55f:
		return "The token is already in use as a primary token.";
		break;
	case 0x560:
		return "The specified local group does not exist.";
		break;
	case 0x561:
		return "The specified account name is not a member of the group.";
		break;
	case 0x562:
		return "The specified account name is already a member of the group.";
		break;
	case 0x563:
		return "The specified local group already exists.";
		break;
	case 0x564:
		return "Logon failure: The user has not been granted the requested logon type at this computer.";
		break;
	case 0x565:
		return "The maximum number of secrets that can be stored in a single system has been exceeded.";
		break;
	case 0x566:
		return "The length of a secret exceeds the maximum length allowed.";
		break;
	case 0x567:
		return "The local security authority database contains an internal inconsistency.";
		break;
	case 0x568:
		return "During a logon attempt, the user's security context accumulated too many SIDs.";
		break;
	case 0x569:
		return "Logon failure: The user has not been granted the requested logon type at this computer.";
		break;
	case 0x56a:
		return "A cross-encrypted password is necessary to change a user password.";
		break;
	case 0x56b:
		return "A member could not be added to or removed from the local group because the member does not exist.";
		break;
	case 0x56c:
		return "A new member could not be added to a local group because the member has the wrong account type.";
		break;
	case 0x56d:
		return "Too many SIDs have been specified.";
		break;
	case 0x56e:
		return "A cross-encrypted password is necessary to change this user password.";
		break;
	case 0x56f:
		return "Indicates an ACL contains no inheritable components.";
		break;
	case 0x570:
		return "The file or directory is corrupted and unreadable.";
		break;
	case 0x571:
		return "The disk structure is corrupted and unreadable.";
		break;
	case 0x572:
		return "There is no user session key for the specified logon session.";
		break;
	case 0x573:
		return "The service being accessed is licensed for a particular number of connections. No more connections can be made to the service at this time because the service has accepted the maximum number of connections.";
		break;
	case 0x574:
		return "Logon failure: The target account name is incorrect.";
		break;
	case 0x575:
		return "Mutual authentication failed. The server's password is out of date at the domain controller.";
		break;
	case 0x576:
		return "There is a time and/or date difference between the client and server.";
		break;
	case 0x577:
		return "This operation cannot be performed on the current domain.";
		break;
	case 0x578:
		return "Invalid window handle.";
		break;
	case 0x579:
		return "Invalid menu handle.";
		break;
	case 0x57a:
		return "Invalid cursor handle.";
		break;
	case 0x57b:
		return "Invalid accelerator table handle.";
		break;
	case 0x57c:
		return "Invalid hook handle.";
		break;
	case 0x57d:
		return "Invalid handle to a multiple-window position structure.";
		break;
	case 0x57e:
		return "Cannot create a top-level child window.";
		break;
	case 0x57f:
		return "Cannot find window class.";
		break;
	case 0x580:
		return "Invalid window; it belongs to other thread.";
		break;
	case 0x581:
		return "Hot key is already registered.";
		break;
	case 0x582:
		return "Class already exists.";
		break;
	case 0x583:
		return "Class does not exist.";
		break;
	case 0x584:
		return "Class still has open windows.";
		break;
	case 0x585:
		return "Invalid index.";
		break;
	case 0x586:
		return "Invalid icon handle.";
		break;
	case 0x587:
		return "Using private DIALOG window words.";
		break;
	case 0x588:
		return "The list box identifier was not found.";
		break;
	case 0x589:
		return "No wildcards were found.";
		break;
	case 0x58a:
		return "Thread does not have a clipboard open.";
		break;
	case 0x58b:
		return "Hot key is not registered.";
		break;
	case 0x58c:
		return "The window is not a valid dialog window.";
		break;
	case 0x58d:
		return "Control ID not found.";
		break;
	case 0x58e:
		return "Invalid message for a combo box because it does not have an edit control.";
		break;
	case 0x58f:
		return "The window is not a combo box.";
		break;
	case 0x590:
		return "Height must be less than 256.";
		break;
	case 0x591:
		return "Invalid device context (DC) handle.";
		break;
	case 0x592:
		return "Invalid hook procedure type.";
		break;
	case 0x593:
		return "Invalid hook procedure.";
		break;
	case 0x594:
		return "Cannot set nonlocal hook without a module handle.";
		break;
	case 0x595:
		return "This hook procedure can only be set globally.";
		break;
	case 0x596:
		return "The journal hook procedure is already installed.";
		break;
	case 0x597:
		return "The hook procedure is not installed.";
		break;
	case 0x598:
		return "Invalid message for single-selection list box.";
		break;
	case 0x599:
		return "LB_SETCOUNT sent to non-lazy list box.";
		break;
	case 0x59a:
		return "This list box does not support tab stops.";
		break;
	case 0x59b:
		return "Cannot destroy object created by another thread.";
		break;
	case 0x59c:
		return "Child windows cannot have menus.";
		break;
	case 0x59d:
		return "The window does not have a system menu.";
		break;
	case 0x59e:
		return "Invalid message box style.";
		break;
	case 0x59f:
		return "Invalid system-wide (SPI_*) parameter.";
		break;
	case 0x5a0:
		return "Screen already locked.";
		break;
	case 0x5a1:
		return "All handles to windows in a multiple-window position structure must have the same parent.";
		break;
	case 0x5a2:
		return "The window is not a child window.";
		break;
	case 0x5a3:
		return "Invalid GW_* command.";
		break;
	case 0x5a4:
		return "Invalid thread identifier.";
		break;
	case 0x5a5:
		return "Cannot process a message from a window that is not a multiple document interface (MDI) window.";
		break;
	case 0x5a6:
		return "Pop-up menu already active.";
		break;
	case 0x5a7:
		return "The window does not have scroll bars.";
		break;
	case 0x5a8:
		return "Scroll bar range cannot be greater than MAXLONG.";
		break;
	case 0x5a9:
		return "Cannot show or remove the window in the way specified.";
		break;
	case 0x5aa:
		return "Insufficient system resources exist to complete the requested service.";
		break;
	case 0x5ab:
		return "Insufficient system resources exist to complete the requested service.";
		break;
	case 0x5ac:
		return "Insufficient system resources exist to complete the requested service.";
		break;
	case 0x5ad:
		return "Insufficient quota to complete the requested service.";
		break;
	case 0x5ae:
		return "Insufficient quota to complete the requested service.";
		break;
	case 0x5af:
		return "The paging file is too small for this operation to complete.";
		break;
	case 0x5b0:
		return "A menu item was not found.";
		break;
	case 0x5b1:
		return "Invalid keyboard layout handle.";
		break;
	case 0x5b2:
		return "Hook type not allowed.";
		break;
	case 0x5b3:
		return "This operation requires an interactive window station.";
		break;
	case 0x5b4:
		return "This operation returned because the time-out period expired.";
		break;
	case 0x5b5:
		return "Invalid monitor handle.";
		break;
	case 0x5b6:
		return "Incorrect size argument.";
		break;
	case 0x5b7:
		return "The symbolic link cannot be followed because its type is disabled.";
		break;
	case 0x5b8:
		return "This application does not support the current operation on symbolic links.";
		break;
	case 0x5dc:
		return "The event log file is corrupted.";
		break;
	case 0x5dd:
		return "No event log file could be opened, so the event logging service did not start.";
		break;
	case 0x5de:
		return "The event log file is full.";
		break;
	case 0x5df:
		return "The event log file has changed between read operations.";
		break;
	case 0x60e:
		return "The specified task name is invalid.";
		break;
	case 0x60f:
		return "The specified task index is invalid.";
		break;
	case 0x610:
		return "The specified thread is already joining a task.";
		break;
	case 0x641:
		return "The Windows Installer service could not be accessed. This can occur if the Windows Installer is not correctly installed. Contact your support personnel for assistance.";
		break;
	case 0x642:
		return "User canceled installation.";
		break;
	case 0x643:
		return "Fatal error during installation.";
		break;
	case 0x644:
		return "Installation suspended, incomplete.";
		break;
	case 0x645:
		return "This action is valid only for products that are currently installed.";
		break;
	case 0x646:
		return "Feature ID not registered.";
		break;
	case 0x647:
		return "Component ID not registered.";
		break;
	case 0x648:
		return "Unknown property.";
		break;
	case 0x649:
		return "Handle is in an invalid state.";
		break;
	case 0x64a:
		return "The configuration data for this product is corrupt. Contact your support personnel.";
		break;
	case 0x64b:
		return "Component qualifier not present.";
		break;
	case 0x64c:
		return "The installation source for this product is not available. Verify that the source exists and that you can access it.";
		break;
	case 0x64d:
		return "This installation package cannot be installed by the Windows Installer service. You must install a Windows service pack that contains a newer version of the Windows Installer service.";
		break;
	case 0x64e:
		return "Product is uninstalled.";
		break;
	case 0x64f:
		return "SQL query syntax invalid or unsupported.";
		break;
	case 0x650:
		return "Record field does not exist.";
		break;
	case 0x651:
		return "The device has been removed.";
		break;
	case 0x652:
		return "Another installation is already in progress. Complete that installation before proceeding with this install.";
		break;
	case 0x653:
		return "This installation package could not be opened. Verify that the package exists and that you can access it, or contact the application vendor to verify that this is a valid Windows Installer package.";
		break;
	case 0x654:
		return "This installation package could not be opened. Contact the application vendor to verify that this is a valid Windows Installer package.";
		break;
	case 0x655:
		return "There was an error starting the Windows Installer service user interface. Contact your support personnel.";
		break;
	case 0x656:
		return "Error opening installation log file. Verify that the specified log file location exists and that you can write to it.";
		break;
	case 0x657:
		return "The language of this installation package is not supported by your system.";
		break;
	case 0x658:
		return "Error applying transforms. Verify that the specified transform paths are valid.";
		break;
	case 0x659:
		return "This installation is forbidden by system policy. Contact your system administrator.";
		break;
	case 0x65a:
		return "Function could not be executed.";
		break;
	case 0x65b:
		return "Function failed during execution.";
		break;
	case 0x65c:
		return "Invalid or unknown table specified.";
		break;
	case 0x65d:
		return "Data supplied is of wrong type.";
		break;
	case 0x65e:
		return "Data of this type is not supported.";
		break;
	case 0x65f:
		return "The Windows Installer service failed to start. Contact your support personnel.";
		break;
	case 0x660:
		return "The Temp folder is on a drive that is full or is inaccessible. Free up space on the drive or verify that you have write permission on the Temp folder.";
		break;
	case 0x661:
		return "This installation package is not supported by this processor type. Contact your product vendor.";
		break;
	case 0x662:
		return "Component not used on this computer.";
		break;
	case 0x663:
		return "This update package could not be opened. Verify that the update package exists and that you can access it, or contact the application vendor to verify that this is a valid Windows Installer update package.";
		break;
	case 0x664:
		return "This update package could not be opened. Contact the application vendor to verify that this is a valid Windows Installer update package.";
		break;
	case 0x665:
		return "This update package cannot be processed by the Windows Installer service. You must install a Windows service pack that contains a newer version of the Windows Installer service.";
		break;
	case 0x666:
		return "Another version of this product is already installed. Installation of this version cannot continue. To configure or remove the existing version of this product, use Add/Remove Programs in Control Panel.";
		break;
	case 0x667:
		return "Invalid command-line argument. Consult the Windows Installer SDK for detailed command line help.";
		break;
	case 0x668:
		return "Only administrators have permission to add, remove, or configure server software during a Terminal Services remote session. If you want to install or configure software on the server, contact your network administrator.";
		break;
	case 0x669:
		return "The requested operation completed successfully. The system will be restarted so the changes can take effect.";
		break;
	case 0x66a:
		return "The upgrade cannot be installed by the Windows Installer service because the program to be upgraded might be missing, or the upgrade might update a different version of the program. Verify that the program to be upgraded exists on your computer and that you have the correct upgrade.";
		break;
	case 0x66b:
		return "The update package is not permitted by a software restriction policy.";
		break;
	case 0x66c:
		return "One or more customizations are not permitted by a software restriction policy.";
		break;
	case 0x66d:
		return "The Windows Installer does not permit installation from a Remote Desktop Connection.";
		break;
	case 0x66e:
		return "Uninstallation of the update package is not supported.";
		break;
	case 0x66f:
		return "The update is not applied to this product.";
		break;
	case 0x670:
		return "No valid sequence could be found for the set of updates.";
		break;
	case 0x671:
		return "Update removal was disallowed by policy.";
		break;
	case 0x672:
		return "The XML update data is invalid.";
		break;
	case 0x673:
		return "Windows Installer does not permit updating of managed advertised products. At least one feature of the product must be installed before applying the update.";
		break;
	case 0x674:
		return "The Windows Installer service is not accessible in Safe Mode. Try again when your computer is not in Safe Mode or you can use System Restore to return your machine to a previous good state.";
		break;
	case 0x6a4:
		return "The string binding is invalid.";
		break;
	case 0x6a5:
		return "The binding handle is not the correct type.";
		break;
	case 0x6a6:
		return "The binding handle is invalid.";
		break;
	case 0x6a7:
		return "The RPC protocol sequence is not supported.";
		break;
	case 0x6a8:
		return "The RPC protocol sequence is invalid.";
		break;
	case 0x6a9:
		return "The string UUID is invalid.";
		break;
	case 0x6aa:
		return "The endpoint format is invalid.";
		break;
	case 0x6ab:
		return "The network address is invalid.";
		break;
	case 0x6ac:
		return "No endpoint was found.";
		break;
	case 0x6ad:
		return "The time-out value is invalid.";
		break;
	case 0x6ae:
		return "The object UUID) was not found.";
		break;
	case 0x6af:
		return "The object UUID) has already been registered.";
		break;
	case 0x6b0:
		return "The type UUID has already been registered.";
		break;
	case 0x6b1:
		return "The RPC server is already listening.";
		break;
	case 0x6b2:
		return "No protocol sequences have been registered.";
		break;
	case 0x6b3:
		return "The RPC server is not listening.";
		break;
	case 0x6b4:
		return "The manager type is unknown.";
		break;
	case 0x6b5:
		return "The interface is unknown.";
		break;
	case 0x6b6:
		return "There are no bindings.";
		break;
	case 0x6b7:
		return "There are no protocol sequences.";
		break;
	case 0x6b8:
		return "The endpoint cannot be created.";
		break;
	case 0x6b9:
		return "Not enough resources are available to complete this operation.";
		break;
	case 0x6ba:
		return "The RPC server is unavailable.";
		break;
	case 0x6bb:
		return "The RPC server is too busy to complete this operation.";
		break;
	case 0x6bc:
		return "The network options are invalid.";
		break;
	case 0x6bd:
		return "There are no RPCs active on this thread.";
		break;
	case 0x6be:
		return "The RPC failed.";
		break;
	case 0x6bf:
		return "The RPC failed and did not execute.";
		break;
	case 0x6c0:
		return "An RPC protocol error occurred.";
		break;
	case 0x6c1:
		return "Access to the HTTP proxy is denied.";
		break;
	case 0x6c2:
		return "The transfer syntax is not supported by the RPC server.";
		break;
	case 0x6c4:
		return "The UUID type is not supported.";
		break;
	case 0x6c5:
		return "The tag is invalid.";
		break;
	case 0x6c6:
		return "The array bounds are invalid.";
		break;
	case 0x6c7:
		return "The binding does not contain an entry name.";
		break;
	case 0x6c8:
		return "The name syntax is invalid.";
		break;
	case 0x6c9:
		return "The name syntax is not supported.";
		break;
	case 0x6cb:
		return "No network address is available to use to construct a UUID.";
		break;
	case 0x6cc:
		return "The endpoint is a duplicate.";
		break;
	case 0x6cd:
		return "The authentication type is unknown.";
		break;
	case 0x6ce:
		return "The maximum number of calls is too small.";
		break;
	case 0x6cf:
		return "The string is too long.";
		break;
	case 0x6d0:
		return "The RPC protocol sequence was not found.";
		break;
	case 0x6d1:
		return "The procedure number is out of range.";
		break;
	case 0x6d2:
		return "The binding does not contain any authentication information.";
		break;
	case 0x6d3:
		return "The authentication service is unknown.";
		break;
	case 0x6d4:
		return "The authentication level is unknown.";
		break;
	case 0x6d5:
		return "The security context is invalid.";
		break;
	case 0x6d6:
		return "The authorization service is unknown.";
		break;
	case 0x6d7:
		return "The entry is invalid.";
		break;
	case 0x6d8:
		return "The server endpoint cannot perform the operation.";
		break;
	case 0x6d9:
		return "There are no more endpoints available from the endpoint mapper.";
		break;
	case 0x6da:
		return "No interfaces have been exported.";
		break;
	case 0x6db:
		return "The entry name is incomplete.";
		break;
	case 0x6dc:
		return "The version option is invalid.";
		break;
	case 0x6dd:
		return "There are no more members.";
		break;
	case 0x6de:
		return "There is nothing to unexport.";
		break;
	case 0x6df:
		return "The interface was not found.";
		break;
	case 0x6e0:
		return "The entry already exists.";
		break;
	case 0x6e1:
		return "The entry is not found.";
		break;
	case 0x6e2:
		return "The name service is unavailable.";
		break;
	case 0x6e3:
		return "The network address family is invalid.";
		break;
	case 0x6e4:
		return "The requested operation is not supported.";
		break;
	case 0x6e5:
		return "No security context is available to allow impersonation.";
		break;
	case 0x6e6:
		return "An internal error occurred in an RPC.";
		break;
	case 0x6e7:
		return "The RPC server attempted an integer division by zero.";
		break;
	case 0x6e8:
		return "An addressing error occurred in the RPC server.";
		break;
	case 0x6e9:
		return "A floating-point operation at the RPC server caused a division by zero.";
		break;
	case 0x6ea:
		return "A floating-point underflow occurred at the RPC server.";
		break;
	case 0x6eb:
		return "A floating-point overflow occurred at the RPC server.";
		break;
	case 0x6ec:
		return "The list of RPC servers available for the binding of auto handles has been exhausted.";
		break;
	case 0x6ed:
		return "Unable to open the character translation table file.";
		break;
	case 0x6ee:
		return "The file containing the character translation table has fewer than 512 bytes.";
		break;
	case 0x6ef:
		return "A null context handle was passed from the client to the host during an RPC.";
		break;
	case 0x6f1:
		return "The context handle changed during an RPC.";
		break;
	case 0x6f2:
		return "The binding handles passed to an RPC do not match.";
		break;
	case 0x6f3:
		return "The stub is unable to get the RPC handle.";
		break;
	case 0x6f4:
		return "A null reference pointer was passed to the stub.";
		break;
	case 0x6f5:
		return "The enumeration value is out of range.";
		break;
	case 0x6f6:
		return "The byte count is too small.";
		break;
	case 0x6f7:
		return "The stub received bad data.";
		break;
	case 0x6f8:
		return "The supplied user buffer is not valid for the requested operation.";
		break;
	case 0x6f9:
		return "The disk media is not recognized. It might not be formatted.";
		break;
	case 0x6fa:
		return "The workstation does not have a trust secret.";
		break;
	case 0x6fb:
		return "The security database on the server does not have a computer account for this workstation trust relationship.";
		break;
	case 0x6fc:
		return "The trust relationship between the primary domain and the trusted domain failed.";
		break;
	case 0x6fd:
		return "The trust relationship between this workstation and the primary domain failed.";
		break;
	case 0x6fe:
		return "The network logon failed.";
		break;
	case 0x6ff:
		return "An RPC is already in progress for this thread.";
		break;
	case 0x700:
		return "An attempt was made to log on, but the network logon service was not started.";
		break;
	case 0x701:
		return "The user's account has expired.";
		break;
	case 0x702:
		return "The redirector is in use and cannot be unloaded.";
		break;
	case 0x703:
		return "The specified printer driver is already installed.";
		break;
	case 0x704:
		return "The specified port is unknown.";
		break;
	case 0x705:
		return "The printer driver is unknown.";
		break;
	case 0x706:
		return "The print processor is unknown.";
		break;
	case 0x707:
		return "The specified separator file is invalid.";
		break;
	case 0x708:
		return "The specified priority is invalid.";
		break;
	case 0x709:
		return "The printer name is invalid.";
		break;
	case 0x70a:
		return "The printer already exists.";
		break;
	case 0x70b:
		return "The printer command is invalid.";
		break;
	case 0x70c:
		return "The specified data type is invalid.";
		break;
	case 0x70d:
		return "The environment specified is invalid.";
		break;
	case 0x70e:
		return "There are no more bindings.";
		break;
	case 0x70f:
		return "The account used is an interdomain trust account. Use your global user account or local user account to access this server.";
		break;
	case 0x710:
		return "The account used is a computer account. Use your global user account or local user account to access this server.";
		break;
	case 0x711:
		return "The account used is a server trust account. Use your global user account or local user account to access this server.";
		break;
	case 0x712:
		return "The name or SID of the domain specified is inconsistent with the trust information for that domain.";
		break;
	case 0x713:
		return "The server is in use and cannot be unloaded.";
		break;
	case 0x714:
		return "The specified image file did not contain a resource section.";
		break;
	case 0x715:
		return "The specified resource type cannot be found in the image file.";
		break;
	case 0x716:
		return "The specified resource name cannot be found in the image file.";
		break;
	case 0x717:
		return "The specified resource language ID cannot be found in the image file.";
		break;
	case 0x718:
		return "Not enough quota is available to process this command.";
		break;
	case 0x719:
		return "No interfaces have been registered.";
		break;
	case 0x71a:
		return "The RPC was canceled.";
		break;
	case 0x71b:
		return "The binding handle does not contain all the required information.";
		break;
	case 0x71c:
		return "A communications failure occurred during an RPC.";
		break;
	case 0x71d:
		return "The requested authentication level is not supported.";
		break;
	case 0x71e:
		return "No principal name is registered.";
		break;
	case 0x71f:
		return "The error specified is not a valid Windows RPC error code.";
		break;
	case 0x720:
		return "A UUID that is valid only on this computer has been allocated.";
		break;
	case 0x721:
		return "A security package-specific error occurred.";
		break;
	case 0x722:
		return "The thread is not canceled.";
		break;
	case 0x723:
		return "Invalid operation on the encoding/decoding handle.";
		break;
	case 0x724:
		return "Incompatible version of the serializing package.";
		break;
	case 0x725:
		return "Incompatible version of the RPC stub.";
		break;
	case 0x726:
		return "The RPC pipe object is invalid or corrupted.";
		break;
	case 0x727:
		return "An invalid operation was attempted on an RPC pipe object.";
		break;
	case 0x728:
		return "Unsupported RPC pipe version.";
		break;
	case 0x76a:
		return "The group member was not found.";
		break;
	case 0x76b:
		return "The endpoint mapper database entry could not be created.";
		break;
	case 0x76c:
		return "The object UUID is the nil UUID.";
		break;
	case 0x76d:
		return "The specified time is invalid.";
		break;
	case 0x76e:
		return "The specified form name is invalid.";
		break;
	case 0x76f:
		return "The specified form size is invalid.";
		break;
	case 0x770:
		return "The specified printer handle is already being waited on.";
		break;
	case 0x771:
		return "The specified printer has been deleted.";
		break;
	case 0x772:
		return "The state of the printer is invalid.";
		break;
	case 0x773:
		return "The user's password must be changed before logging on the first time.";
		break;
	case 0x774:
		return "Could not find the domain controller for this domain.";
		break;
	case 0x775:
		return "The referenced account is currently locked out and cannot be logged on to.";
		break;
	case 0x776:
		return "The object exporter specified was not found.";
		break;
	case 0x777:
		return "The object specified was not found.";
		break;
	case 0x778:
		return "The object set specified was not found.";
		break;
	case 0x779:
		return "Some data remains to be sent in the request buffer.";
		break;
	case 0x77a:
		return "Invalid asynchronous RPC handle.";
		break;
	case 0x77b:
		return "Invalid asynchronous RPC call handle for this operation.";
		break;
	case 0x77c:
		return "The RPC pipe object has already been closed.";
		break;
	case 0x77d:
		return "The RPC call completed before all pipes were processed.";
		break;
	case 0x77e:
		return "No more data is available from the RPC pipe.";
		break;
	case 0x77f:
		return "No site name is available for this machine.";
		break;
	case 0x780:
		return "The file cannot be accessed by the system.";
		break;
	case 0x781:
		return "The name of the file cannot be resolved by the system.";
		break;
	case 0x782:
		return "The entry is not of the expected type.";
		break;
	case 0x783:
		return "Not all object UUIDs could be exported to the specified entry.";
		break;
	case 0x784:
		return "The interface could not be exported to the specified entry.";
		break;
	case 0x785:
		return "The specified profile entry could not be added.";
		break;
	case 0x786:
		return "The specified profile element could not be added.";
		break;
	case 0x787:
		return "The specified profile element could not be removed.";
		break;
	case 0x788:
		return "The group element could not be added.";
		break;
	case 0x789:
		return "The group element could not be removed.";
		break;
	case 0x78a:
		return "The printer driver is not compatible with a policy enabled on your computer that blocks Windows NT 4.0 operating system drivers.";
		break;
	case 0x78b:
		return "The context has expired and can no longer be used.";
		break;
	case 0x78c:
		return "The current user's delegated trust creation quota has been exceeded.";
		break;
	case 0x78d:
		return "The total delegated trust creation quota has been exceeded.";
		break;
	case 0x78e:
		return "The current user's delegated trust deletion quota has been exceeded.";
		break;
	case 0x78f:
		return "Logon failure: The machine you are logging on to is protected by an authentication firewall. The specified account is not allowed to authenticate to the machine.";
		break;
	case 0x790:
		return "Remote connections to the Print Spooler are blocked by a policy set on your machine.";
		break;
	case 0x7d0:
		return "The pixel format is invalid.";
		break;
	case 0x7d1:
		return "The specified driver is invalid.";
		break;
	case 0x7d2:
		return "The window style or class attribute is invalid for this operation.";
		break;
	case 0x7d3:
		return "The requested metafile operation is not supported.";
		break;
	case 0x7d4:
		return "The requested transformation operation is not supported.";
		break;
	case 0x7d5:
		return "The requested clipping operation is not supported.";
		break;
	case 0x7da:
		return "The specified color management module is invalid.";
		break;
	case 0x7db:
		return "The specified color profile is invalid.";
		break;
	case 0x7dc:
		return "The specified tag was not found.";
		break;
	case 0x7dd:
		return "A required tag is not present.";
		break;
	case 0x7de:
		return "The specified tag is already present.";
		break;
	case 0x7df:
		return "The specified color profile is not associated with any device.";
		break;
	case 0x7e0:
		return "The specified color profile was not found.";
		break;
	case 0x7e1:
		return "The specified color space is invalid.";
		break;
	case 0x7e2:
		return "Image Color Management is not enabled.";
		break;
	case 0x7e3:
		return "There was an error while deleting the color transform.";
		break;
	case 0x7e4:
		return "The specified color transform is invalid.";
		break;
	case 0x7e5:
		return "The specified transform does not match the bitmap's color space.";
		break;
	case 0x7e6:
		return "The specified named color index is not present in the profile.";
		break;
	case 0x7e7:
		return "The specified profile is intended for a device of a different type than the specified device.";
		break;
	case 0x836:
		return "The workstation driver is not installed.";
		break;
	case 0x837:
		return "The server could not be located.";
		break;
	case 0x838:
		return "An internal error occurred. The network cannot access a shared memory segment.";
		break;
	case 0x839:
		return "A network resource shortage occurred.";
		break;
	case 0x83a:
		return "This operation is not supported on workstations.";
		break;
	case 0x83b:
		return "The device is not connected.";
		break;
	case 0x83c:
		return "The network connection was made successfully, but the user had to be prompted for a password other than the one originally specified.";
		break;
	case 0x83d:
		return "The network connection was made successfully using default credentials.";
		break;
	case 0x842:
		return "The Server service is not started.";
		break;
	case 0x843:
		return "The queue is empty.";
		break;
	case 0x844:
		return "The device or directory does not exist.";
		break;
	case 0x845:
		return "The operation is invalid on a redirected resource.";
		break;
	case 0x846:
		return "The name has already been shared.";
		break;
	case 0x847:
		return "The server is currently out of the requested resource.";
		break;
	case 0x849:
		return "Requested addition of items exceeds the maximum allowed.";
		break;
	case 0x84a:
		return "The Peer service supports only two simultaneous users.";
		break;
	case 0x84b:
		return "The API return buffer is too small.";
		break;
	case 0x84f:
		return "A remote API error occurred.";
		break;
	case 0x853:
		return "An error occurred when opening or reading the configuration file.";
		break;
	case 0x858:
		return "A general network error occurred.";
		break;
	case 0x859:
		return "The Workstation service is in an inconsistent state. Restart the computer before restarting the Workstation service.";
		break;
	case 0x85a:
		return "The Workstation service has not been started.";
		break;
	case 0x85b:
		return "The requested information is not available.";
		break;
	case 0x85c:
		return "An internal error occurred.";
		break;
	case 0x85d:
		return "The server is not configured for transactions.";
		break;
	case 0x85e:
		return "The requested API is not supported on the remote server.";
		break;
	case 0x85f:
		return "The event name is invalid.";
		break;
	case 0x860:
		return "The computer name already exists on the network. Change it and reboot the computer.";
		break;
	case 0x862:
		return "The specified component could not be found in the configuration information.";
		break;
	case 0x863:
		return "The specified parameter could not be found in the configuration information.";
		break;
	case 0x865:
		return "A line in the configuration file is too long.";
		break;
	case 0x866:
		return "The printer does not exist.";
		break;
	case 0x867:
		return "The print job does not exist.";
		break;
	case 0x868:
		return "The printer destination cannot be found.";
		break;
	case 0x869:
		return "The printer destination already exists.";
		break;
	case 0x86a:
		return "The print queue already exists.";
		break;
	case 0x86b:
		return "No more printers can be added.";
		break;
	case 0x86c:
		return "No more print jobs can be added.";
		break;
	case 0x86d:
		return "No more printer destinations can be added.";
		break;
	case 0x86e:
		return "This printer destination is idle and cannot accept control operations.";
		break;
	case 0x86f:
		return "This printer destination request contains an invalid control function.";
		break;
	case 0x870:
		return "The print processor is not responding.";
		break;
	case 0x871:
		return "The spooler is not running.";
		break;
	case 0x872:
		return "This operation cannot be performed on the print destination in its current state.";
		break;
	case 0x873:
		return "This operation cannot be performed on the print queue in its current state.";
		break;
	case 0x874:
		return "This operation cannot be performed on the print job in its current state.";
		break;
	case 0x875:
		return "A spooler memory allocation failure occurred.";
		break;
	case 0x876:
		return "The device driver does not exist.";
		break;
	case 0x877:
		return "The data type is not supported by the print processor.";
		break;
	case 0x878:
		return "The print processor is not installed.";
		break;
	case 0x884:
		return "The service database is locked.";
		break;
	case 0x885:
		return "The service table is full.";
		break;
	case 0x886:
		return "The requested service has already been started.";
		break;
	case 0x887:
		return "The service does not respond to control actions.";
		break;
	case 0x888:
		return "The service has not been started.";
		break;
	case 0x889:
		return "The service name is invalid.";
		break;
	case 0x88a:
		return "The service is not responding to the control function.";
		break;
	case 0x88b:
		return "The service control is busy.";
		break;
	case 0x88c:
		return "The configuration file contains an invalid service program name.";
		break;
	case 0x88d:
		return "The service could not be controlled in its present state.";
		break;
	case 0x88e:
		return "The service ended abnormally.";
		break;
	case 0x88f:
		return "The requested pause or stop is not valid for this service.";
		break;
	case 0x890:
		return "The service control dispatcher could not find the service name in the dispatch table.";
		break;
	case 0x891:
		return "The service control dispatcher pipe read failed.";
		break;
	case 0x892:
		return "A thread for the new service could not be created.";
		break;
	case 0x898:
		return "This workstation is already logged on to the LAN.";
		break;
	case 0x899:
		return "The workstation is not logged on to the LAN.";
		break;
	case 0x89a:
		return "The user name or group name parameter is invalid.";
		break;
	case 0x89b:
		return "The password parameter is invalid.";
		break;
	case 0x89c:
		return "The logon processor did not add the message alias.";
		break;
	case 0x89d:
		return "The logon processor did not add the message alias.";
		break;
	case 0x89e:
		return "The logoff processor did not delete the message alias.";
		break;
	case 0x89f:
		return "The logoff processor did not delete the message alias.";
		break;
	case 0x8a1:
		return "Network logons are paused.";
		break;
	case 0x8a2:
		return "A centralized logon server conflict occurred.";
		break;
	case 0x8a3:
		return "The server is configured without a valid user path.";
		break;
	case 0x8a4:
		return "An error occurred while loading or running the logon script.";
		break;
	case 0x8a6:
		return "The logon server was not specified. The computer will be logged on as STANDALONE.";
		break;
	case 0x8a7:
		return "The logon server could not be found.";
		break;
	case 0x8a8:
		return "There is already a logon domain for this computer.";
		break;
	case 0x8a9:
		return "The logon server could not validate the logon.";
		break;
	case 0x8ab:
		return "The security database could not be found.";
		break;
	case 0x8ac:
		return "The group name could not be found.";
		break;
	case 0x8ad:
		return "The user name could not be found.";
		break;
	case 0x8ae:
		return "The resource name could not be found.";
		break;
	case 0x8af:
		return "The group already exists.";
		break;
	case 0x8b0:
		return "The user account already exists.";
		break;
	case 0x8b1:
		return "The resource permission list already exists.";
		break;
	case 0x8b2:
		return "This operation is allowed only on the PDC of the domain.";
		break;
	case 0x8b3:
		return "The security database has not been started.";
		break;
	case 0x8b4:
		return "There are too many names in the user accounts database.";
		break;
	case 0x8b5:
		return "A disk I/O failure occurred.";
		break;
	case 0x8b6:
		return "The limit of 64 entries per resource was exceeded.";
		break;
	case 0x8b7:
		return "Deleting a user with a session is not allowed.";
		break;
	case 0x8b8:
		return "The parent directory could not be located.";
		break;
	case 0x8b9:
		return "Unable to add to the security database session cache segment.";
		break;
	case 0x8ba:
		return "This operation is not allowed on this special group.";
		break;
	case 0x8bb:
		return "This user is not cached in the user accounts database session cache.";
		break;
	case 0x8bc:
		return "The user already belongs to this group.";
		break;
	case 0x8bd:
		return "The user does not belong to this group.";
		break;
	case 0x8be:
		return "This user account is undefined.";
		break;
	case 0x8bf:
		return "This user account has expired.";
		break;
	case 0x8c0:
		return "The user is not allowed to log on from this workstation.";
		break;
	case 0x8c1:
		return "The user is not allowed to log on at this time.";
		break;
	case 0x8c2:
		return "The password of this user has expired.";
		break;
	case 0x8c3:
		return "The password of this user cannot change.";
		break;
	case 0x8c4:
		return "This password cannot be used now.";
		break;
	case 0x8c5:
		return "The password does not meet the password policy requirements. Check the minimum password length, password complexity, and password history requirements.";
		break;
	case 0x8c6:
		return "The password of this user is too recent to change.";
		break;
	case 0x8c7:
		return "The security database is corrupted.";
		break;
	case 0x8c8:
		return "No updates are necessary to this replicant network or local security database.";
		break;
	case 0x8c9:
		return "This replicant database is outdated; synchronization is required.";
		break;
	case 0x8ca:
		return "The network connection could not be found.";
		break;
	case 0x8cb:
		return "This asg_type is invalid.";
		break;
	case 0x8cc:
		return "This device is currently being shared.";
		break;
	case 0x8de:
		return "The computer name could not be added as a message alias. The name might already exist on the network.";
		break;
	case 0x8df:
		return "The Messenger service is already started.";
		break;
	case 0x8e0:
		return "The Messenger service failed to start.";
		break;
	case 0x8e1:
		return "The message alias could not be found on the network.";
		break;
	case 0x8e2:
		return "This message alias has already been forwarded.";
		break;
	case 0x8e3:
		return "This message alias has been added but is still forwarded.";
		break;
	case 0x8e4:
		return "This message alias already exists locally.";
		break;
	case 0x8e5:
		return "The maximum number of added message aliases has been exceeded.";
		break;
	case 0x8e6:
		return "The computer name could not be deleted.";
		break;
	case 0x8e7:
		return "Messages cannot be forwarded back to the same workstation.";
		break;
	case 0x8e8:
		return "An error occurred in the domain message processor.";
		break;
	case 0x8e9:
		return "The message was sent, but the recipient has paused the Messenger service.";
		break;
	case 0x8ea:
		return "The message was sent but not received.";
		break;
	case 0x8eb:
		return "The message alias is currently in use. Try again later.";
		break;
	case 0x8ec:
		return "The Messenger service has not been started.";
		break;
	case 0x8ed:
		return "The name is not on the local computer.";
		break;
	case 0x8ee:
		return "The forwarded message alias could not be found on the network.";
		break;
	case 0x8ef:
		return "The message alias table on the remote station is full.";
		break;
	case 0x8f0:
		return "Messages for this alias are not currently being forwarded.";
		break;
	case 0x8f1:
		return "The broadcast message was truncated.";
		break;
	case 0x8f6:
		return "This is an invalid device name.";
		break;
	case 0x8f7:
		return "A write fault occurred.";
		break;
	case 0x8f9:
		return "A duplicate message alias exists on the network.";
		break;
	case 0x8fa:
		return "This message alias will be deleted later.";
		break;
	case 0x8fb:
		return "The message alias was not successfully deleted from all networks.";
		break;
	case 0x8fc:
		return "This operation is not supported on computers with multiple networks.";
		break;
	case 0x906:
		return "This shared resource does not exist.";
		break;
	case 0x907:
		return "This device is not shared.";
		break;
	case 0x908:
		return "A session does not exist with that computer name.";
		break;
	case 0x90a:
		return "There is not an open file with that identification number.";
		break;
	case 0x90b:
		return "A failure occurred when executing a remote administration command.";
		break;
	case 0x90c:
		return "A failure occurred when opening a remote temporary file.";
		break;
	case 0x90d:
		return "The data returned from a remote administration command has been truncated to 64 KB.";
		break;
	case 0x90e:
		return "This device cannot be shared as both a spooled and a nonspooled resource.";
		break;
	case 0x90f:
		return "The information in the list of servers might be incorrect.";
		break;
	case 0x910:
		return "The computer is not active in this domain.";
		break;
	case 0x911:
		return "The share must be removed from the Distributed File System (DFS) before it can be deleted.";
		break;
	case 0x91b:
		return "The operation is invalid for this device.";
		break;
	case 0x91c:
		return "This device cannot be shared.";
		break;
	case 0x91d:
		return "This device was not open.";
		break;
	case 0x91e:
		return "This device name list is invalid.";
		break;
	case 0x91f:
		return "The queue priority is invalid.";
		break;
	case 0x921:
		return "There are no shared communication devices.";
		break;
	case 0x922:
		return "The queue you specified does not exist.";
		break;
	case 0x924:
		return "This list of devices is invalid.";
		break;
	case 0x925:
		return "The requested device is invalid.";
		break;
	case 0x926:
		return "This device is already in use by the spooler.";
		break;
	case 0x927:
		return "This device is already in use as a communication device.";
		break;
	case 0x92f:
		return "This computer name is invalid.";
		break;
	case 0x932:
		return "The string and prefix specified are too long.";
		break;
	case 0x934:
		return "This path component is invalid.";
		break;
	case 0x935:
		return "Could not determine the type of input.";
		break;
	case 0x93a:
		return "The buffer for types is not big enough.";
		break;
	case 0x942:
		return "Profile files cannot exceed 64 KB.";
		break;
	case 0x943:
		return "The start offset is out of range.";
		break;
	case 0x944:
		return "The system cannot delete current connections to network resources.";
		break;
	case 0x945:
		return "The system was unable to parse the command line in this file.";
		break;
	case 0x946:
		return "An error occurred while loading the profile file.";
		break;
	case 0x947:
		return "Errors occurred while saving the profile file. The profile was partially saved.";
		break;
	case 0x949:
		return "Log file %1 is full.";
		break;
	case 0x94a:
		return "This log file has changed between reads.";
		break;
	case 0x94b:
		return "Log file %1 is corrupt.";
		break;
	case 0x94c:
		return "The source path cannot be a directory.";
		break;
	case 0x94d:
		return "The source path is illegal.";
		break;
	case 0x94e:
		return "The destination path is illegal.";
		break;
	case 0x94f:
		return "The source and destination paths are on different servers.";
		break;
	case 0x951:
		return "The Run server you requested is paused.";
		break;
	case 0x955:
		return "An error occurred when communicating with a Run server.";
		break;
	case 0x957:
		return "An error occurred when starting a background process.";
		break;
	case 0x958:
		return "The shared resource you are connected to could not be found.";
		break;
	case 0x960:
		return "The LAN adapter number is invalid.";
		break;
	case 0x961:
		return "There are open files on the connection.";
		break;
	case 0x962:
		return "Active connections still exist.";
		break;
	case 0x963:
		return "This share name or password is invalid.";
		break;
	case 0x964:
		return "The device is being accessed by an active process.";
		break;
	case 0x965:
		return "The drive letter is in use locally.";
		break;
	case 0x97e:
		return "The specified client is already registered for the specified event.";
		break;
	case 0x97f:
		return "The alert table is full.";
		break;
	case 0x980:
		return "An invalid or nonexistent alert name was raised.";
		break;
	case 0x981:
		return "The alert recipient is invalid.";
		break;
	case 0x982:
		return "A user's session with this server has been deleted.";
		break;
	case 0x988:
		return "The log file does not contain the requested record number.";
		break;
	case 0x992:
		return "The user accounts database is not configured correctly.";
		break;
	case 0x993:
		return "This operation is not permitted when the Net Logon service is running.";
		break;
	case 0x994:
		return "This operation is not allowed on the last administrative account.";
		break;
	case 0x995:
		return "Could not find the domain controller for this domain.";
		break;
	case 0x996:
		return "Could not set logon information for this user.";
		break;
	case 0x997:
		return "The Net Logon service has not been started.";
		break;
	case 0x998:
		return "Unable to add to the user accounts database.";
		break;
	case 0x999:
		return "This server's clock is not synchronized with the PDC's clock.";
		break;
	case 0x99a:
		return "A password mismatch has been detected.";
		break;
	case 0x99c:
		return "The server identification does not specify a valid server.";
		break;
	case 0x99d:
		return "The session identification does not specify a valid session.";
		break;
	case 0x99e:
		return "The connection identification does not specify a valid connection.";
		break;
	case 0x99f:
		return "There is no space for another entry in the table of available servers.";
		break;
	case 0x9a0:
		return "The server has reached the maximum number of sessions it supports.";
		break;
	case 0x9a1:
		return "The server has reached the maximum number of connections it supports.";
		break;
	case 0x9a2:
		return "The server cannot open more files because it has reached its maximum number.";
		break;
	case 0x9a3:
		return "There are no alternate servers registered on this server.";
		break;
	case 0x9a6:
		return "Try the down-level (remote admin protocol) version of API instead.";
		break;
	case 0x9b0:
		return "The uninterruptible power supply (UPS) driver could not be accessed by the UPS service.";
		break;
	case 0x9b1:
		return "The UPS service is not configured correctly.";
		break;
	case 0x9b2:
		return "The UPS service could not access the specified Comm Port.";
		break;
	case 0x9b3:
		return "The UPS indicated a line fail or low battery situation. Service not started.";
		break;
	case 0x9b4:
		return "The UPS service failed to perform a system shut down.";
		break;
	case 0x9c4:
		return "The program below returned an MS-DOS error code.";
		break;
	case 0x9c5:
		return "The program below needs more memory.";
		break;
	case 0x9c6:
		return "The program below called an unsupported MS-DOS function.";
		break;
	case 0x9c7:
		return "The workstation failed to boot.";
		break;
	case 0x9c8:
		return "The file below is corrupt.";
		break;
	case 0x9c9:
		return "No loader is specified in the boot-block definition file.";
		break;
	case 0x9ca:
		return "NetBIOS returned an error: The network control blocks (NCBs) and Server Message Block (SMB) are dumped above.";
		break;
	case 0x9cb:
		return "A disk I/O error occurred.";
		break;
	case 0x9cc:
		return "Image parameter substitution failed.";
		break;
	case 0x9cd:
		return "Too many image parameters cross disk sector boundaries.";
		break;
	case 0x9ce:
		return "The image was not generated from an MS-DOS disk formatted with /S.";
		break;
	case 0x9cf:
		return "Remote boot will be restarted later.";
		break;
	case 0x9d0:
		return "The call to the Remoteboot server failed.";
		break;
	case 0x9d1:
		return "Cannot connect to the Remoteboot server.";
		break;
	case 0x9d2:
		return "Cannot open image file on the Remoteboot server.";
		break;
	case 0x9d3:
		return "Connecting to the Remoteboot server.";
		break;
	case 0x9d4:
		return "Connecting to the Remoteboot server.";
		break;
	case 0x9d5:
		return "Remote boot service was stopped, check the error log for the cause of the problem.";
		break;
	case 0x9d6:
		return "Remote boot startup failed; check the error log for the cause of the problem.";
		break;
	case 0x9d7:
		return "A second connection to a Remoteboot resource is not allowed.";
		break;
	case 0x9f6:
		return "The browser service was configured with MaintainServerList=No.";
		break;
	case 0xa32:
		return "Service failed to start because none of the network adapters started with this service.";
		break;
	case 0xa33:
		return "Service failed to start due to bad startup information in the registry.";
		break;
	case 0xa34:
		return "Service failed to start because its database is absent or corrupt.";
		break;
	case 0xa35:
		return "Service failed to start because the RPLFILES share is absent.";
		break;
	case 0xa36:
		return "Service failed to start because the RPLUSER group is absent.";
		break;
	case 0xa37:
		return "Cannot enumerate service records.";
		break;
	case 0xa38:
		return "Workstation record information has been corrupted.";
		break;
	case 0xa39:
		return "Workstation record was not found.";
		break;
	case 0xa3a:
		return "Workstation name is in use by some other workstation.";
		break;
	case 0xa3b:
		return "Profile record information has been corrupted.";
		break;
	case 0xa3c:
		return "Profile record was not found.";
		break;
	case 0xa3d:
		return "Profile name is in use by some other profile.";
		break;
	case 0xa3e:
		return "There are workstations using this profile.";
		break;
	case 0xa3f:
		return "Configuration record information has been corrupted.";
		break;
	case 0xa40:
		return "Configuration record was not found.";
		break;
	case 0xa41:
		return "Adapter ID record information has been corrupted.";
		break;
	case 0xa42:
		return "An internal service error has occurred.";
		break;
	case 0xa43:
		return "Vendor ID record information has been corrupted.";
		break;
	case 0xa44:
		return "Boot block record information has been corrupted.";
		break;
	case 0xa45:
		return "The user account for this workstation record is missing.";
		break;
	case 0xa46:
		return "The RPLUSER local group could not be found.";
		break;
	case 0xa47:
		return "Boot block record was not found.";
		break;
	case 0xa48:
		return "Chosen profile is incompatible with this workstation.";
		break;
	case 0xa49:
		return "Chosen network adapter ID is in use by some other workstation.";
		break;
	case 0xa4a:
		return "There are profiles using this configuration.";
		break;
	case 0xa4b:
		return "There are workstations, profiles, or configurations using this boot block.";
		break;
	case 0xa4c:
		return "Service failed to back up the Remoteboot database.";
		break;
	case 0xa4d:
		return "Adapter record was not found.";
		break;
	case 0xa4e:
		return "Vendor record was not found.";
		break;
	case 0xa4f:
		return "Vendor name is in use by some other vendor record.";
		break;
	case 0xa50:
		return "The boot name or vendor ID is in use by some other boot block record.";
		break;
	case 0xa51:
		return "The configuration name is in use by some other configuration.";
		break;
	case 0xa64:
		return "The internal database maintained by the DFS service is corrupt.";
		break;
	case 0xa65:
		return "One of the records in the internal DFS database is corrupt.";
		break;
	case 0xa66:
		return "There is no DFS name whose entry path matches the input entry path.";
		break;
	case 0xa67:
		return "A root or link with the given name already exists.";
		break;
	case 0xa68:
		return "The server share specified is already shared in the DFS.";
		break;
	case 0xa69:
		return "The indicated server share does not support the indicated DFS namespace.";
		break;
	case 0xa6a:
		return "The operation is not valid in this portion of the namespace.";
		break;
	case 0xa6b:
		return "The operation is not valid in this portion of the namespace.";
		break;
	case 0xa6c:
		return "The operation is ambiguous because the link has multiple servers.";
		break;
	case 0xa6d:
		return "Unable to create a link.";
		break;
	case 0xa6e:
		return "The server is not DFS-aware.";
		break;
	case 0xa6f:
		return "The specified rename target path is invalid.";
		break;
	case 0xa70:
		return "The specified DFS link is offline.";
		break;
	case 0xa71:
		return "The specified server is not a server for this link.";
		break;
	case 0xa72:
		return "A cycle in the DFS name was detected.";
		break;
	case 0xa73:
		return "The operation is not supported on a server-based DFS.";
		break;
	case 0xa74:
		return "This link is already supported by the specified server share.";
		break;
	case 0xa75:
		return "Cannot remove the last server share supporting this root or link.";
		break;
	case 0xa76:
		return "The operation is not supported for an inter-DFS link.";
		break;
	case 0xa77:
		return "The internal state of the DFS Service has become inconsistent.";
		break;
	case 0xa78:
		return "The DFS Service has been installed on the specified server.";
		break;
	case 0xa79:
		return "The DFS data being reconciled is identical.";
		break;
	case 0xa7a:
		return "The DFS root cannot be deleted. Uninstall DFS if required.";
		break;
	case 0xa7b:
		return "A child or parent directory of the share is already in a DFS.";
		break;
	case 0xa82:
		return "DFS internal error.";
		break;
	case 0xa83:
		return "This machine is already joined to a domain.";
		break;
	case 0xa84:
		return "This machine is not currently joined to a domain.";
		break;
	case 0xa85:
		return "This machine is a domain controller and cannot be unjoined from a domain.";
		break;
	case 0xa86:
		return "The destination domain controller does not support creating machine accounts in organizational units (OUs).";
		break;
	case 0xa87:
		return "The specified workgroup name is invalid.";
		break;
	case 0xa88:
		return "The specified computer name is incompatible with the default language used on the domain controller.";
		break;
	case 0xa89:
		return "The specified computer account could not be found.";
		break;
	case 0xa8a:
		return "This version of Windows cannot be joined to a domain.";
		break;
	case 0xa8d:
		return "The password must change at the next logon.";
		break;
	case 0xa8e:
		return "The account is locked out.";
		break;
	case 0xa8f:
		return "The password is too long.";
		break;
	case 0xa90:
		return "The password does not meet the complexity policy.";
		break;
	case 0xa91:
		return "The password does not meet the requirements of the password filter DLLs.";
		break;
	case 0xbb8:
		return "The specified print monitor is unknown.";
		break;
	case 0xbb9:
		return "The specified printer driver is currently in use.";
		break;
	case 0xbba:
		return "The spool file was not found.";
		break;
	case 0xbbb:
		return "A StartDocPrinter call was not issued.";
		break;
	case 0xbbc:
		return "An AddJob call was not issued.";
		break;
	case 0xbbd:
		return "The specified print processor has already been installed.";
		break;
	case 0xbbe:
		return "The specified print monitor has already been installed.";
		break;
	case 0xbbf:
		return "The specified print monitor does not have the required functions.";
		break;
	case 0xbc0:
		return "The specified print monitor is currently in use.";
		break;
	case 0xbc1:
		return "The requested operation is not allowed when there are jobs queued to the printer.";
		break;
	case 0xbc2:
		return "The requested operation is successful. Changes will not be effective until the system is rebooted.";
		break;
	case 0xbc3:
		return "The requested operation is successful. Changes will not be effective until the service is restarted.";
		break;
	case 0xbc4:
		return "No printers were found.";
		break;
	case 0xbc5:
		return "The printer driver is known to be unreliable.";
		break;
	case 0xbc6:
		return "The printer driver is known to harm the system.";
		break;
	case 0xbc7:
		return "The specified printer driver package is currently in use.";
		break;
	case 0xbc8:
		return "Unable to find a core driver package that is required by the printer driver package.";
		break;
	case 0xbc9:
		return "The requested operation failed. A system reboot is required to roll back changes made.";
		break;
	case 0xbca:
		return "The requested operation failed. A system reboot has been initiated to roll back changes made.";
		break;
	case 0xbcb:
		return "The specified printer driver was not found on the system and needs to be downloaded.";
		break;
	case 0xbce:
		return "The specified printer cannot be shared.";
		break;
	case 0xf6e:
		return "Reissue the given operation as a cached I/O operation.";
		break;
	case 0xfa0:
		return "Windows Internet Name Service (WINS) encountered an error while processing the command.";
		break;
	case 0xfa1:
		return "The local WINS cannot be deleted.";
		break;
	case 0xfa2:
		return "The importation from the file failed.";
		break;
	case 0xfa3:
		return "The backup failed. Was a full backup done before?";
		break;
	case 0xfa4:
		return "The backup failed. Check the directory to which you are backing the database.";
		break;
	case 0xfa5:
		return "The name does not exist in the WINS database.";
		break;
	case 0xfa6:
		return "Replication with a nonconfigured partner is not allowed.";
		break;
	case 0xfd2:
		return "The version of the supplied content information is not supported.";
		break;
	case 0xfd3:
		return "The supplied content information is malformed.";
		break;
	case 0xfd4:
		return "The requested data cannot be found in local or peer caches.";
		break;
	case 0xfd5:
		return "No more data is available or required.";
		break;
	case 0xfd6:
		return "The supplied object has not been initialized.";
		break;
	case 0xfd7:
		return "The supplied object has already been initialized.";
		break;
	case 0xfd8:
		return "A shutdown operation is already in progress.";
		break;
	case 0xfd9:
		return "The supplied object has already been invalidated.";
		break;
	case 0xfda:
		return "An element already exists and was not replaced.";
		break;
	case 0xfdb:
		return "Cannot cancel the requested operation as it has already been completed.";
		break;
	case 0xfdc:
		return "Cannot perform the requested operation because it has already been carried out.";
		break;
	case 0xfdd:
		return "An operation accessed data beyond the bounds of valid data.";
		break;
	case 0xfde:
		return "The requested version is not supported.";
		break;
	case 0xfdf:
		return "A configuration value is invalid.";
		break;
	case 0xfe0:
		return "The SKU is not licensed.";
		break;
	case 0xfe1:
		return "PeerDist Service is still initializing and will be available shortly.";
		break;
	case 0x1004:
		return "The Dynamic Host Configuration Protocol (DHCP) client has obtained an IP address that is already in use on the network. The local interface will be disabled until the DHCP client can obtain a new address.";
		break;
	case 0x1068:
		return "The GUID passed was not recognized as valid by a WMI data provider.";
		break;
	case 0x1069:
		return "The instance name passed was not recognized as valid by a WMI data provider.";
		break;
	case 0x106a:
		return "The data item ID passed was not recognized as valid by a WMI data provider.";
		break;
	case 0x106b:
		return "The WMI request could not be completed and should be retried.";
		break;
	case 0x106c:
		return "The WMI data provider could not be located.";
		break;
	case 0x106d:
		return "The WMI data provider references an instance set that has not been registered.";
		break;
	case 0x106e:
		return "The WMI data block or event notification has already been enabled.";
		break;
	case 0x106f:
		return "The WMI data block is no longer available.";
		break;
	case 0x1070:
		return "The WMI data service is not available.";
		break;
	case 0x1071:
		return "The WMI data provider failed to carry out the request.";
		break;
	case 0x1072:
		return "The WMI Managed Object Format (MOF) information is not valid.";
		break;
	case 0x1073:
		return "The WMI registration information is not valid.";
		break;
	case 0x1074:
		return "The WMI data block or event notification has already been disabled.";
		break;
	case 0x1075:
		return "The WMI data item or data block is read-only.";
		break;
	case 0x1076:
		return "The WMI data item or data block could not be changed.";
		break;
	case 0x10cc:
		return "The media identifier does not represent a valid medium.";
		break;
	case 0x10cd:
		return "The library identifier does not represent a valid library.";
		break;
	case 0x10ce:
		return "The media pool identifier does not represent a valid media pool.";
		break;
	case 0x10cf:
		return "The drive and medium are not compatible, or they exist in different libraries.";
		break;
	case 0x10d0:
		return "The medium currently exists in an offline library and must be online to perform this operation.";
		break;
	case 0x10d1:
		return "The operation cannot be performed on an offline library.";
		break;
	case 0x10d2:
		return "The library, drive, or media pool is empty.";
		break;
	case 0x10d3:
		return "The library, drive, or media pool must be empty to perform this operation.";
		break;
	case 0x10d4:
		return "No media is currently available in this media pool or library.";
		break;
	case 0x10d5:
		return "A resource required for this operation is disabled.";
		break;
	case 0x10d6:
		return "The media identifier does not represent a valid cleaner.";
		break;
	case 0x10d7:
		return "The drive cannot be cleaned or does not support cleaning.";
		break;
	case 0x10d8:
		return "The object identifier does not represent a valid object.";
		break;
	case 0x10d9:
		return "Unable to read from or write to the database.";
		break;
	case 0x10da:
		return "The database is full.";
		break;
	case 0x10db:
		return "The medium is not compatible with the device or media pool.";
		break;
	case 0x10dc:
		return "The resource required for this operation does not exist.";
		break;
	case 0x10dd:
		return "The operation identifier is not valid.";
		break;
	case 0x10de:
		return "The media is not mounted or ready for use.";
		break;
	case 0x10df:
		return "The device is not ready for use.";
		break;
	case 0x10e0:
		return "The operator or administrator has refused the request.";
		break;
	case 0x10e1:
		return "The drive identifier does not represent a valid drive.";
		break;
	case 0x10e2:
		return "Library is full. No slot is available for use.";
		break;
	case 0x10e3:
		return "The transport cannot access the medium.";
		break;
	case 0x10e4:
		return "Unable to load the medium into the drive.";
		break;
	case 0x10e5:
		return "Unable to retrieve the drive status.";
		break;
	case 0x10e6:
		return "Unable to retrieve the slot status.";
		break;
	case 0x10e7:
		return "Unable to retrieve status about the transport.";
		break;
	case 0x10e8:
		return "Cannot use the transport because it is already in use.";
		break;
	case 0x10e9:
		return "Unable to open or close the inject/eject port.";
		break;
	case 0x10ea:
		return "Unable to eject the medium because it is in a drive.";
		break;
	case 0x10eb:
		return "A cleaner slot is already reserved.";
		break;
	case 0x10ec:
		return "A cleaner slot is not reserved.";
		break;
	case 0x10ed:
		return "The cleaner cartridge has performed the maximum number of drive cleanings.";
		break;
	case 0x10ee:
		return "Unexpected on-medium identifier.";
		break;
	case 0x10ef:
		return "The last remaining item in this group or resource cannot be deleted.";
		break;
	case 0x10f0:
		return "The message provided exceeds the maximum size allowed for this parameter.";
		break;
	case 0x10f1:
		return "The volume contains system or paging files.";
		break;
	case 0x10f2:
		return "The media type cannot be removed from this library because at least one drive in the library reports it can support this media type.";
		break;
	case 0x10f3:
		return "This offline media cannot be mounted on this system because no enabled drives are present that can be used.";
		break;
	case 0x10f4:
		return "A cleaner cartridge is present in the tape library.";
		break;
	case 0x10f5:
		return "Cannot use the IEport because it is not empty.";
		break;
	case 0x10fe:
		return "The remote storage service was not able to recall the file.";
		break;
	case 0x10ff:
		return "The remote storage service is not operational at this time.";
		break;
	case 0x1100:
		return "The remote storage service encountered a media error.";
		break;
	case 0x1126:
		return "The file or directory is not a reparse point.";
		break;
	case 0x1127:
		return "The reparse point attribute cannot be set because it conflicts with an existing attribute.";
		break;
	case 0x1128:
		return "The data present in the reparse point buffer is invalid.";
		break;
	case 0x1129:
		return "The tag present in the reparse point buffer is invalid.";
		break;
	case 0x112a:
		return "There is a mismatch between the tag specified in the request and the tag present in the reparse point.";
		break;
	case 0x1194:
		return "Single Instance Storage (SIS) is not available on this volume.";
		break;
	case 0x1389:
		return "The operation cannot be completed because other resources depend on this resource.";
		break;
	case 0x138a:
		return "The cluster resource dependency cannot be found.";
		break;
	case 0x138b:
		return "The cluster resource cannot be made dependent on the specified resource because it is already dependent.";
		break;
	case 0x138c:
		return "The cluster resource is not online.";
		break;
	case 0x138d:
		return "A cluster node is not available for this operation.";
		break;
	case 0x138e:
		return "The cluster resource is not available.";
		break;
	case 0x138f:
		return "The cluster resource could not be found.";
		break;
	case 0x1390:
		return "The cluster is being shut down.";
		break;
	case 0x1391:
		return "A cluster node cannot be evicted from the cluster unless the node is down or it is the last node.";
		break;
	case 0x1392:
		return "The object already exists.";
		break;
	case 0x1393:
		return "The object is already in the list.";
		break;
	case 0x1394:
		return "The cluster group is not available for any new requests.";
		break;
	case 0x1395:
		return "The cluster group could not be found.";
		break;
	case 0x1396:
		return "The operation could not be completed because the cluster group is not online.";
		break;
	case 0x1397:
		return "The operation failed because either the specified cluster node is not the owner of the resource, or the node is not a possible owner of the resource.";
		break;
	case 0x1398:
		return "The operation failed because either the specified cluster node is not the owner of the group, or the node is not a possible owner of the group.";
		break;
	case 0x1399:
		return "The cluster resource could not be created in the specified resource monitor.";
		break;
	case 0x139a:
		return "The cluster resource could not be brought online by the resource monitor.";
		break;
	case 0x139b:
		return "The operation could not be completed because the cluster resource is online.";
		break;
	case 0x139c:
		return "The cluster resource could not be deleted or brought offline because it is the quorum resource.";
		break;
	case 0x139d:
		return "The cluster could not make the specified resource a quorum resource because it is not capable of being a quorum resource.";
		break;
	case 0x139e:
		return "The cluster software is shutting down.";
		break;
	case 0x139f:
		return "The group or resource is not in the correct state to perform the requested operation.";
		break;
	case 0x13a0:
		return "The properties were stored but not all changes will take effect until the next time the resource is brought online.";
		break;
	case 0x13a1:
		return "The cluster could not make the specified resource a quorum resource because it does not belong to a shared storage class.";
		break;
	case 0x13a2:
		return "The cluster resource could not be deleted because it is a core resource.";
		break;
	case 0x13a3:
		return "The quorum resource failed to come online.";
		break;
	case 0x13a4:
		return "The quorum log could not be created or mounted successfully.";
		break;
	case 0x13a5:
		return "The cluster log is corrupt.";
		break;
	case 0x13a6:
		return "The record could not be written to the cluster log because it exceeds the maximum size.";
		break;
	case 0x13a7:
		return "The cluster log exceeds its maximum size.";
		break;
	case 0x13a8:
		return "No checkpoint record was found in the cluster log.";
		break;
	case 0x13a9:
		return "The minimum required disk space needed for logging is not available.";
		break;
	case 0x13aa:
		return "The cluster node failed to take control of the quorum resource because the resource is owned by another active node.";
		break;
	case 0x13ab:
		return "A cluster network is not available for this operation.";
		break;
	case 0x13ac:
		return "A cluster node is not available for this operation.";
		break;
	case 0x13ad:
		return "All cluster nodes must be running to perform this operation.";
		break;
	case 0x13ae:
		return "A cluster resource failed.";
		break;
	case 0x13af:
		return "The cluster node is not valid.";
		break;
	case 0x13b0:
		return "The cluster node already exists.";
		break;
	case 0x13b1:
		return "A node is in the process of joining the cluster.";
		break;
	case 0x13b2:
		return "The cluster node was not found.";
		break;
	case 0x13b3:
		return "The cluster local node information was not found.";
		break;
	case 0x13b4:
		return "The cluster network already exists.";
		break;
	case 0x13b5:
		return "The cluster network was not found.";
		break;
	case 0x13b6:
		return "The cluster network interface already exists.";
		break;
	case 0x13b7:
		return "The cluster network interface was not found.";
		break;
	case 0x13b8:
		return "The cluster request is not valid for this object.";
		break;
	case 0x13b9:
		return "The cluster network provider is not valid.";
		break;
	case 0x13ba:
		return "The cluster node is down.";
		break;
	case 0x13bb:
		return "The cluster node is not reachable.";
		break;
	case 0x13bc:
		return "The cluster node is not a member of the cluster.";
		break;
	case 0x13bd:
		return "A cluster join operation is not in progress.";
		break;
	case 0x13be:
		return "The cluster network is not valid.";
		break;
	case 0x13c0:
		return "The cluster node is up.";
		break;
	case 0x13c1:
		return "The cluster IP address is already in use.";
		break;
	case 0x13c2:
		return "The cluster node is not paused.";
		break;
	case 0x13c3:
		return "No cluster security context is available.";
		break;
	case 0x13c4:
		return "The cluster network is not configured for internal cluster communication.";
		break;
	case 0x13c5:
		return "The cluster node is already up.";
		break;
	case 0x13c6:
		return "The cluster node is already down.";
		break;
	case 0x13c7:
		return "The cluster network is already online.";
		break;
	case 0x13c8:
		return "The cluster network is already offline.";
		break;
	case 0x13c9:
		return "The cluster node is already a member of the cluster.";
		break;
	case 0x13ca:
		return "The cluster network is the only one configured for internal cluster communication between two or more active cluster nodes. The internal communication capability cannot be removed from the network.";
		break;
	case 0x13cb:
		return "One or more cluster resources depend on the network to provide service to clients. The client access capability cannot be removed from the network.";
		break;
	case 0x13cc:
		return "This operation cannot be performed on the cluster resource because it is the quorum resource. This quorum resource cannot be brought offline and its possible owners list cannot be modified.";
		break;
	case 0x13cd:
		return "The cluster quorum resource is not allowed to have any dependencies.";
		break;
	case 0x13ce:
		return "The cluster node is paused.";
		break;
	case 0x13cf:
		return "The cluster resource cannot be brought online. The owner node cannot run this resource.";
		break;
	case 0x13d0:
		return "The cluster node is not ready to perform the requested operation.";
		break;
	case 0x13d1:
		return "The cluster node is shutting down.";
		break;
	case 0x13d2:
		return "The cluster join operation was aborted.";
		break;
	case 0x13d3:
		return "The cluster join operation failed due to incompatible software versions between the joining node and its sponsor.";
		break;
	case 0x13d4:
		return "This resource cannot be created because the cluster has reached the limit on the number of resources it can monitor.";
		break;
	case 0x13d5:
		return "The system configuration changed during the cluster join or form operation. The join or form operation was aborted.";
		break;
	case 0x13d6:
		return "The specified resource type was not found.";
		break;
	case 0x13d7:
		return "The specified node does not support a resource of this type. This might be due to version inconsistencies or due to the absence of the resource DLL on this node.";
		break;
	case 0x13d8:
		return "The specified resource name is not supported by this resource DLL. This might be due to a bad (or changed) name supplied to the resource DLL.";
		break;
	case 0x13d9:
		return "No authentication package could be registered with the RPC server.";
		break;
	case 0x13da:
		return "You cannot bring the group online because the owner of the group is not in the preferred list for the group. To change the owner node for the group, move the group.";
		break;
	case 0x13db:
		return "The join operation failed because the cluster database sequence number has changed or is incompatible with the locker node. This can happen during a join operation if the cluster database was changing during the join.";
		break;
	case 0x13dc:
		return "The resource monitor will not allow the fail operation to be performed while the resource is in its current state. This can happen if the resource is in a pending state.";
		break;
	case 0x13dd:
		return "A non-locker code received a request to reserve the lock for making global updates.";
		break;
	case 0x13de:
		return "The quorum disk could not be located by the cluster service.";
		break;
	case 0x13df:
		return "The backed-up cluster database is possibly corrupt.";
		break;
	case 0x13e0:
		return "A DFS root already exists in this cluster node.";
		break;
	case 0x13e1:
		return "An attempt to modify a resource property failed because it conflicts with another existing property.";
		break;
	case 0x1702:
		return "An operation was attempted that is incompatible with the current membership state of the node.";
		break;
	case 0x1703:
		return "The quorum resource does not contain the quorum log.";
		break;
	case 0x1704:
		return "The membership engine requested shutdown of the cluster service on this node.";
		break;
	case 0x1705:
		return "The join operation failed because the cluster instance ID of the joining node does not match the cluster instance ID of the sponsor node.";
		break;
	case 0x1706:
		return "A matching cluster network for the specified IP address could not be found.";
		break;
	case 0x1707:
		return "The actual data type of the property did not match the expected data type of the property.";
		break;
	case 0x1708:
		return "The cluster node was evicted from the cluster successfully, but the node was not cleaned up. To determine what clean-up steps failed and how to recover, see the Failover Clustering application event log using Event Viewer.";
		break;
	case 0x1709:
		return "Two or more parameter values specified for a resource's properties are in conflict.";
		break;
	case 0x170a:
		return "This computer cannot be made a member of a cluster.";
		break;
	case 0x170b:
		return "This computer cannot be made a member of a cluster because it does not have the correct version of Windows installed.";
		break;
	case 0x170c:
		return "A cluster cannot be created with the specified cluster name because that cluster name is already in use. Specify a different name for the cluster.";
		break;
	case 0x170d:
		return "The cluster configuration action has already been committed.";
		break;
	case 0x170e:
		return "The cluster configuration action could not be rolled back.";
		break;
	case 0x170f:
		return "The drive letter assigned to a system disk on one node conflicted with the drive letter assigned to a disk on another node.";
		break;
	case 0x1710:
		return "One or more nodes in the cluster are running a version of Windows that does not support this operation.";
		break;
	case 0x1711:
		return "The name of the corresponding computer account does not match the network name for this resource.";
		break;
	case 0x1712:
		return "No network adapters are available.";
		break;
	case 0x1713:
		return "The cluster node has been poisoned.";
		break;
	case 0x1714:
		return "The group is unable to accept the request because it is moving to another node.";
		break;
	case 0x1715:
		return "The resource type cannot accept the request because it is too busy performing another operation.";
		break;
	case 0x1716:
		return "The call to the cluster resource DLL timed out.";
		break;
	case 0x1717:
		return "The address is not valid for an IPv6 Address resource. A global IPv6 address is required, and it must match a cluster network. Compatibility addresses are not permitted.";
		break;
	case 0x1718:
		return "An internal cluster error occurred. A call to an invalid function was attempted.";
		break;
	case 0x1719:
		return "A parameter value is out of acceptable range.";
		break;
	case 0x171a:
		return "A network error occurred while sending data to another node in the cluster. The number of bytes transmitted was less than required.";
		break;
	case 0x171b:
		return "An invalid cluster registry operation was attempted.";
		break;
	case 0x171c:
		return "An input string of characters is not properly terminated.";
		break;
	case 0x171d:
		return "An input string of characters is not in a valid format for the data it represents.";
		break;
	case 0x171e:
		return "An internal cluster error occurred. A cluster database transaction was attempted while a transaction was already in progress.";
		break;
	case 0x171f:
		return "An internal cluster error occurred. There was an attempt to commit a cluster database transaction while no transaction was in progress.";
		break;
	case 0x1720:
		return "An internal cluster error occurred. Data was not properly initialized.";
		break;
	case 0x1721:
		return "An error occurred while reading from a stream of data. An unexpected number of bytes was returned.";
		break;
	case 0x1722:
		return "An error occurred while writing to a stream of data. The required number of bytes could not be written.";
		break;
	case 0x1723:
		return "An error occurred while deserializing a stream of cluster data.";
		break;
	case 0x1724:
		return "One or more property values for this resource are in conflict with one or more property values associated with its dependent resources.";
		break;
	case 0x1725:
		return "A quorum of cluster nodes was not present to form a cluster.";
		break;
	case 0x1726:
		return "The cluster network is not valid for an IPv6 address resource, or it does not match the configured address.";
		break;
	case 0x1727:
		return "The cluster network is not valid for an IPv6 tunnel resource. Check the configuration of the IP Address resource on which the IPv6 tunnel resource depends.";
		break;
	case 0x1728:
		return "Quorum resource cannot reside in the available storage group.";
		break;
	case 0x1770:
		return "The specified file could not be encrypted.";
		break;
	case 0x1771:
		return "The specified file could not be decrypted.";
		break;
	case 0x1772:
		return "The specified file is encrypted and the user does not have the ability to decrypt it.";
		break;
	case 0x1773:
		return "There is no valid encryption recovery policy configured for this system.";
		break;
	case 0x1774:
		return "The required encryption driver is not loaded for this system.";
		break;
	case 0x1775:
		return "The file was encrypted with a different encryption driver than is currently loaded.";
		break;
	case 0x1776:
		return "There are no Encrypting File System (EFS) keys defined for the user.";
		break;
	case 0x1777:
		return "The specified file is not encrypted.";
		break;
	case 0x1778:
		return "The specified file is not in the defined EFS export format.";
		break;
	case 0x1779:
		return "The specified file is read-only.";
		break;
	case 0x177a:
		return "The directory has been disabled for encryption.";
		break;
	case 0x177b:
		return "The server is not trusted for remote encryption operation.";
		break;
	case 0x177c:
		return "Recovery policy configured for this system contains invalid recovery certificate.";
		break;
	case 0x177d:
		return "The encryption algorithm used on the source file needs a bigger key buffer than the one on the destination file.";
		break;
	case 0x177e:
		return "The disk partition does not support file encryption.";
		break;
	case 0x177f:
		return "This machine is disabled for file encryption.";
		break;
	case 0x1780:
		return "A newer system is required to decrypt this encrypted file.";
		break;
	case 0x1781:
		return "The remote server sent an invalid response for a file being opened with client-side encryption.";
		break;
	case 0x1782:
		return "Client-side encryption is not supported by the remote server even though it claims to support it.";
		break;
	case 0x1783:
		return "File is encrypted and should be opened in client-side encryption mode.";
		break;
	case 0x1784:
		return "A new encrypted file is being created and a $EFS needs to be provided.";
		break;
	case 0x1785:
		return "The SMB client requested a client-side extension (CSE) file system control (FSCTL) on a non-CSE file.";
		break;
	case 0x17e6:
		return "The list of servers for this workgroup is not currently available";
		break;
	case 0x1838:
		return "The Task Scheduler service must be configured to run in the System account to function properly. Individual tasks can be configured to run in other accounts.";
		break;
	case 0x19c8:
		return "The log service encountered an invalid log sector.";
		break;
	case 0x19c9:
		return "The log service encountered a log sector with invalid block parity.";
		break;
	case 0x19ca:
		return "The log service encountered a remapped log sector.";
		break;
	case 0x19cb:
		return "The log service encountered a partial or incomplete log block.";
		break;
	case 0x19cc:
		return "The log service encountered an attempt to access data outside the active log range.";
		break;
	case 0x19cd:
		return "The log service user marshaling buffers are exhausted.";
		break;
	case 0x19ce:
		return "The log service encountered an attempt to read from a marshaling area with an invalid read context.";
		break;
	case 0x19cf:
		return "The log service encountered an invalid log restart area.";
		break;
	case 0x19d0:
		return "The log service encountered an invalid log block version.";
		break;
	case 0x19d1:
		return "The log service encountered an invalid log block.";
		break;
	case 0x19d2:
		return "The log service encountered an attempt to read the log with an invalid read mode.";
		break;
	case 0x19d3:
		return "The log service encountered a log stream with no restart area.";
		break;
	case 0x19d4:
		return "The log service encountered a corrupted metadata file.";
		break;
	case 0x19d5:
		return "The log service encountered a metadata file that could not be created by the log file system.";
		break;
	case 0x19d6:
		return "The log service encountered a metadata file with inconsistent data.";
		break;
	case 0x19d7:
		return "The log service encountered an attempt to erroneous allocate or dispose reservation space.";
		break;
	case 0x19d8:
		return "The log service cannot delete a log file or file system container.";
		break;
	case 0x19d9:
		return "The log service has reached the maximum allowable containers allocated to a log file.";
		break;
	case 0x19da:
		return "The log service has attempted to read or write backward past the start of the log.";
		break;
	case 0x19db:
		return "The log policy could not be installed because a policy of the same type is already present.";
		break;
	case 0x19dc:
		return "The log policy in question was not installed at the time of the request.";
		break;
	case 0x19dd:
		return "The installed set of policies on the log is invalid.";
		break;
	case 0x19de:
		return "A policy on the log in question prevented the operation from completing.";
		break;
	case 0x19df:
		return "Log space cannot be reclaimed because the log is pinned by the archive tail.";
		break;
	case 0x19e0:
		return "The log record is not a record in the log file.";
		break;
	case 0x19e1:
		return "The number of reserved log records or the adjustment of the number of reserved log records is invalid.";
		break;
	case 0x19e2:
		return "The reserved log space or the adjustment of the log space is invalid.";
		break;
	case 0x19e3:
		return "A new or existing archive tail or base of the active log is invalid.";
		break;
	case 0x19e4:
		return "The log space is exhausted.";
		break;
	case 0x19e5:
		return "The log could not be set to the requested size.";
		break;
	case 0x19e6:
		return "The log is multiplexed; no direct writes to the physical log are allowed.";
		break;
	case 0x19e7:
		return "The operation failed because the log is a dedicated log.";
		break;
	case 0x19e8:
		return "The operation requires an archive context.";
		break;
	case 0x19e9:
		return "Log archival is in progress.";
		break;
	case 0x19ea:
		return "The operation requires a non-ephemeral log, but the log is ephemeral.";
		break;
	case 0x19eb:
		return "The log must have at least two containers before it can be read from or written to.";
		break;
	case 0x19ec:
		return "A log client has already registered on the stream.";
		break;
	case 0x19ed:
		return "A log client has not been registered on the stream.";
		break;
	case 0x19ee:
		return "A request has already been made to handle the log full condition.";
		break;
	case 0x19ef:
		return "The log service encountered an error when attempting to read from a log container.";
		break;
	case 0x19f0:
		return "The log service encountered an error when attempting to write to a log container.";
		break;
	case 0x19f1:
		return "The log service encountered an error when attempting to open a log container.";
		break;
	case 0x19f2:
		return "The log service encountered an invalid container state when attempting a requested action.";
		break;
	case 0x19f3:
		return "The log service is not in the correct state to perform a requested action.";
		break;
	case 0x19f4:
		return "The log space cannot be reclaimed because the log is pinned.";
		break;
	case 0x19f5:
		return "The log metadata flush failed.";
		break;
	case 0x19f6:
		return "Security on the log and its containers is inconsistent.";
		break;
	case 0x19f7:
		return "Records were appended to the log or reservation changes were made, but the log could not be flushed.";
		break;
	case 0x19f8:
		return "The log is pinned due to reservation consuming most of the log space. Free some reserved records to make space available.";
		break;
	case 0x1a2c:
		return "The transaction handle associated with this operation is not valid.";
		break;
	case 0x1a2d:
		return "The requested operation was made in the context of a transaction that is no longer active.";
		break;
	case 0x1a2e:
		return "The requested operation is not valid on the transaction object in its current state.";
		break;
	case 0x1a2f:
		return "The caller has called a response API, but the response is not expected because the transaction manager did not issue the corresponding request to the caller.";
		break;
	case 0x1a30:
		return "It is too late to perform the requested operation because the transaction has already been aborted.";
		break;
	case 0x1a31:
		return "It is too late to perform the requested operation because the transaction has already been committed.";
		break;
	case 0x1a32:
		return "The transaction manager was unable to be successfully initialized. Transacted operations are not supported.";
		break;
	case 0x1a33:
		return "The specified resource manager made no changes or updates to the resource under this transaction.";
		break;
	case 0x1a34:
		return "The resource manager has attempted to prepare a transaction that it has not successfully joined.";
		break;
	case 0x1a35:
		return "The transaction object already has a superior enlistment, and the caller attempted an operation that would have created a new superior. Only a single superior enlistment is allowed.";
		break;
	case 0x1a36:
		return "The resource manager tried to register a protocol that already exists.";
		break;
	case 0x1a37:
		return "The attempt to propagate the transaction failed.";
		break;
	case 0x1a38:
		return "The requested propagation protocol was not registered as a CRM.";
		break;
	case 0x1a39:
		return "The buffer passed in to PushTransaction or PullTransaction is not in a valid format.";
		break;
	case 0x1a3a:
		return "The current transaction context associated with the thread is not a valid handle to a transaction object.";
		break;
	case 0x1a3b:
		return "The specified transaction object could not be opened because it was not found.";
		break;
	case 0x1a3c:
		return "The specified resource manager object could not be opened because it was not found.";
		break;
	case 0x1a3d:
		return "The specified enlistment object could not be opened because it was not found.";
		break;
	case 0x1a3e:
		return "The specified transaction manager object could not be opened because it was not found.";
		break;
	case 0x1a3f:
		return "The specified resource manager was unable to create an enlistment because its associated transaction manager is not online.";
		break;
	case 0x1a40:
		return "The specified transaction manager was unable to create the objects contained in its log file in the ObjectB namespace. Therefore, the transaction manager was unable to recover.";
		break;
	case 0x1a90:
		return "The function attempted to use a name that is reserved for use by another transaction.";
		break;
	case 0x1a91:
		return "Transaction support within the specified file system resource manager is not started or was shut down due to an error.";
		break;
	case 0x1a92:
		return "The metadata of the resource manager has been corrupted. The resource manager will not function.";
		break;
	case 0x1a93:
		return "The specified directory does not contain a resource manager.";
		break;
	case 0x1a95:
		return "The remote server or share does not support transacted file operations.";
		break;
	case 0x1a96:
		return "The requested log size is invalid.";
		break;
	case 0x1a97:
		return "The object (file, stream, link) corresponding to the handle has been deleted by a transaction savepoint rollback.";
		break;
	case 0x1a98:
		return "The specified file miniversion was not found for this transacted file open.";
		break;
	case 0x1a99:
		return "The specified file miniversion was found but has been invalidated. The most likely cause is a transaction savepoint rollback.";
		break;
	case 0x1a9a:
		return "A miniversion can only be opened in the context of the transaction that created it.";
		break;
	case 0x1a9b:
		return "It is not possible to open a miniversion with modify access.";
		break;
	case 0x1a9c:
		return "It is not possible to create any more miniversions for this stream.";
		break;
	case 0x1a9e:
		return "The remote server sent mismatching version numbers or FID for a file opened with transactions.";
		break;
	case 0x1a9f:
		return "The handle has been invalidated by a transaction. The most likely cause is the presence of memory mapping on a file, or an open handle when the transaction ended or rolled back to savepoint.";
		break;
	case 0x1aa0:
		return "There is no transaction metadata on the file.";
		break;
	case 0x1aa1:
		return "The log data is corrupt.";
		break;
	case 0x1aa2:
		return "The file cannot be recovered because a handle is still open on it.";
		break;
	case 0x1aa3:
		return "The transaction outcome is unavailable because the resource manager responsible for it is disconnected.";
		break;
	case 0x1aa4:
		return "The request was rejected because the enlistment in question is not a superior enlistment.";
		break;
	case 0x1aa5:
		return "The transactional resource manager is already consistent. Recovery is not needed.";
		break;
	case 0x1aa6:
		return "The transactional resource manager has already been started.";
		break;
	case 0x1aa7:
		return "The file cannot be opened in a transaction because its identity depends on the outcome of an unresolved transaction.";
		break;
	case 0x1aa8:
		return "The operation cannot be performed because another transaction is depending on the fact that this property will not change.";
		break;
	case 0x1aa9:
		return "The operation would involve a single file with two transactional resource managers and is therefore not allowed.";
		break;
	case 0x1aaa:
		return "The $Txf directory must be empty for this operation to succeed.";
		break;
	case 0x1aab:
		return "The operation would leave a transactional resource manager in an inconsistent state and is, therefore, not allowed.";
		break;
	case 0x1aac:
		return "The operation could not be completed because the transaction manager does not have a log.";
		break;
	case 0x1aad:
		return "A rollback could not be scheduled because a previously scheduled rollback has already been executed or is queued for execution.";
		break;
	case 0x1aae:
		return "The transactional metadata attribute on the file or directory is corrupt and unreadable.";
		break;
	case 0x1aaf:
		return "The encryption operation could not be completed because a transaction is active.";
		break;
	case 0x1ab0:
		return "This object is not allowed to be opened in a transaction.";
		break;
	case 0x1ab1:
		return "An attempt to create space in the transactional resource manager's log failed. The failure status has been recorded in the event log.";
		break;
	case 0x1ab2:
		return "Memory mapping (creating a mapped section) to a remote file under a transaction is not supported.";
		break;
	case 0x1ab3:
		return "Transaction metadata is already present on this file and cannot be superseded.";
		break;
	case 0x1ab4:
		return "A transaction scope could not be entered because the scope handler has not been initialized.";
		break;
	case 0x1ab5:
		return "Promotion was required to allow the resource manager to enlist, but the transaction was set to disallow it.";
		break;
	case 0x1ab6:
		return "This file is open for modification in an unresolved transaction and can be opened for execution only by a transacted reader.";
		break;
	case 0x1ab7:
		return "The request to thaw frozen transactions was ignored because transactions were not previously frozen.";
		break;
	case 0x1ab8:
		return "Transactions cannot be frozen because a freeze is already in progress.";
		break;
	case 0x1ab9:
		return "The target volume is not a snapshot volume. This operation is only valid on a volume mounted as a snapshot.";
		break;
	case 0x1aba:
		return "The savepoint operation failed because files are open on the transaction. This is not permitted.";
		break;
	case 0x1abb:
		return "Windows has discovered corruption in a file, and that file has since been repaired. Data loss might have occurred.";
		break;
	case 0x1abc:
		return "The sparse operation could not be completed because a transaction is active on the file.";
		break;
	case 0x1abd:
		return "The call to create a transaction manager object failed because the Tm Identity stored in the logfile does not match the Tm Identity that was passed in as an argument.";
		break;
	case 0x1abe:
		return "I/O was attempted on a section object that has been floated as a result of a transaction ending. There is no valid data.";
		break;
	case 0x1abf:
		return "The transactional resource manager cannot currently accept transacted work due to a transient condition, such as low resources.";
		break;
	case 0x1ac0:
		return "The transactional resource manager had too many transactions outstanding that could not be aborted. The transactional resource manager has been shut down.";
		break;
	case 0x1b59:
		return "The specified session name is invalid.";
		break;
	case 0x1b5a:
		return "The specified protocol driver is invalid.";
		break;
	case 0x1b5b:
		return "The specified protocol driver was not found in the system path.";
		break;
	case 0x1b5c:
		return "The specified terminal connection driver was not found in the system path.";
		break;
	case 0x1b5d:
		return "A registry key for event logging could not be created for this session.";
		break;
	case 0x1b5e:
		return "A service with the same name already exists on the system.";
		break;
	case 0x1b5f:
		return "A close operation is pending on the session.";
		break;
	case 0x1b60:
		return "There are no free output buffers available.";
		break;
	case 0x1b61:
		return "The MODEM.INF file was not found.";
		break;
	case 0x1b62:
		return "The modem name was not found in the MODEM.INF file.";
		break;
	case 0x1b63:
		return "The modem did not accept the command sent to it. Verify that the configured modem name matches the attached modem.";
		break;
	case 0x1b64:
		return "The modem did not respond to the command sent to it. Verify that the modem is properly cabled and turned on.";
		break;
	case 0x1b65:
		return "Carrier detect has failed or carrier has been dropped due to disconnect.";
		break;
	case 0x1b66:
		return "Dial tone not detected within the required time. Verify that the phone cable is properly attached and functional.";
		break;
	case 0x1b67:
		return "Busy signal detected at remote site on callback.";
		break;
	case 0x1b68:
		return "Voice detected at remote site on callback.";
		break;
	case 0x1b69:
		return "Transport driver error.";
		break;
	case 0x1b6e:
		return "The specified session cannot be found.";
		break;
	case 0x1b6f:
		return "The specified session name is already in use.";
		break;
	case 0x1b70:
		return "The requested operation cannot be completed because the terminal connection is currently busy processing a connect, disconnect, reset, or delete operation.";
		break;
	case 0x1b71:
		return "An attempt has been made to connect to a session whose video mode is not supported by the current client.";
		break;
	case 0x1b7b:
		return "The application attempted to enable DOS graphics mode. DOS graphics mode is not supported.";
		break;
	case 0x1b7d:
		return "Your interactive logon privilege has been disabled. Contact your administrator.";
		break;
	case 0x1b7e:
		return "The requested operation can be performed only on the system console. This is most often the result of a driver or system DLL requiring direct console access.";
		break;
	case 0x1b80:
		return "The client failed to respond to the server connect message.";
		break;
	case 0x1b81:
		return "Disconnecting the console session is not supported.";
		break;
	case 0x1b82:
		return "Reconnecting a disconnected session to the console is not supported.";
		break;
	case 0x1b84:
		return "The request to control another session remotely was denied.";
		break;
	case 0x1b85:
		return "The requested session access is denied.";
		break;
	case 0x1b89:
		return "The specified terminal connection driver is invalid.";
		break;
	case 0x1b8a:
		return "The requested session cannot be controlled remotely. This might be because the session is disconnected or does not currently have a user logged on.";
		break;
	case 0x1b8b:
		return "The requested session is not configured to allow remote control.";
		break;
	case 0x1b8c:
		return "Your request to connect to this terminal server has been rejected. Your terminal server client license number is currently being used by another user. Call your system administrator to obtain a unique license number.";
		break;
	case 0x1b8d:
		return "Your request to connect to this terminal server has been rejected. Your terminal server client license number has not been entered for this copy of the terminal server client. Contact your system administrator.";
		break;
	case 0x1b8e:
		return "The number of connections to this computer is limited and all connections are in use right now. Try connecting later or contact your system administrator.";
		break;
	case 0x1b8f:
		return "The client you are using is not licensed to use this system. Your logon request is denied.";
		break;
	case 0x1b90:
		return "The system license has expired. Your logon request is denied.";
		break;
	case 0x1b91:
		return "Remote control could not be terminated because the specified session is not currently being remotely controlled.";
		break;
	case 0x1b92:
		return "The remote control of the console was terminated because the display mode was changed. Changing the display mode in a remote control session is not supported.";
		break;
	case 0x1b93:
		return "Activation has already been reset the maximum number of times for this installation. Your activation timer will not be cleared.";
		break;
	case 0x1b94:
		return "Remote logons are currently disabled.";
		break;
	case 0x1b95:
		return "You do not have the proper encryption level to access this session.";
		break;
	case 0x1b96:
		return "The user %s\\%s is currently logged on to this computer. Only the current user or an administrator can log on to this computer.";
		break;
	case 0x1b97:
		return "The user %s\\%s is already logged on to the console of this computer. You do not have permission to log in at this time. To resolve this issue, contact %s\\%s and have them log off.";
		break;
	case 0x1b98:
		return "Unable to log you on because of an account restriction.";
		break;
	case 0x1b99:
		return "The RDP component %2 detected an error in the protocol stream and has disconnected the client.";
		break;
	case 0x1b9a:
		return "The Client Drive Mapping Service has connected on terminal connection.";
		break;
	case 0x1b9b:
		return "The Client Drive Mapping Service has disconnected on terminal connection.";
		break;
	case 0x1b9c:
		return "The terminal server security layer detected an error in the protocol stream and has disconnected the client.";
		break;
	case 0x1b9d:
		return "The target session is incompatible with the current session.";
		break;
	case 0x1f41:
		return "The file replication service API was called incorrectly.";
		break;
	case 0x1f42:
		return "The file replication service cannot be started.";
		break;
	case 0x1f43:
		return "The file replication service cannot be stopped.";
		break;
	case 0x1f44:
		return "The file replication service API terminated the request. The event log might contain more information.";
		break;
	case 0x1f45:
		return "The file replication service terminated the request. The event log might contain more information.";
		break;
	case 0x1f46:
		return "The file replication service cannot be contacted. The event log might contain more information.";
		break;
	case 0x1f47:
		return "The file replication service cannot satisfy the request because the user has insufficient privileges. The event log might contain more information.";
		break;
	case 0x1f48:
		return "The file replication service cannot satisfy the request because authenticated RPC is not available. The event log might contain more information.";
		break;
	case 0x1f49:
		return "The file replication service cannot satisfy the request because the user has insufficient privileges on the domain controller. The event log might contain more information.";
		break;
	case 0x1f4a:
		return "The file replication service cannot satisfy the request because authenticated RPC is not available on the domain controller. The event log might contain more information.";
		break;
	case 0x1f4b:
		return "The file replication service cannot communicate with the file replication service on the domain controller. The event log might contain more information.";
		break;
	case 0x1f4c:
		return "The file replication service on the domain controller cannot communicate with the file replication service on this computer. The event log might contain more information.";
		break;
	case 0x1f4d:
		return "The file replication service cannot populate the system volume because of an internal error. The event log might contain more information.";
		break;
	case 0x1f4e:
		return "The file replication service cannot populate the system volume because of an internal time-out. The event log might contain more information.";
		break;
	case 0x1f4f:
		return "The file replication service cannot process the request. The system volume is busy with a previous request.";
		break;
	case 0x1f50:
		return "The file replication service cannot stop replicating the system volume because of an internal error. The event log might contain more information.";
		break;
	case 0x1f51:
		return "The file replication service detected an invalid parameter.";
		break;
	case 0x2008:
		return "An error occurred while installing the directory service. For more information, see the event log.";
		break;
	case 0x2009:
		return "The directory service evaluated group memberships locally.";
		break;
	case 0x200a:
		return "The specified directory service attribute or value does not exist.";
		break;
	case 0x200b:
		return "The attribute syntax specified to the directory service is invalid.";
		break;
	case 0x200c:
		return "The attribute type specified to the directory service is not defined.";
		break;
	case 0x200d:
		return "The specified directory service attribute or value already exists.";
		break;
	case 0x200e:
		return "The directory service is busy.";
		break;
	case 0x200f:
		return "The directory service is unavailable.";
		break;
	case 0x2010:
		return "The directory service was unable to allocate a relative identifier.";
		break;
	case 0x2011:
		return "The directory service has exhausted the pool of relative identifiers.";
		break;
	case 0x2012:
		return "The requested operation could not be performed because the directory service is not the master for that type of operation.";
		break;
	case 0x2013:
		return "The directory service was unable to initialize the subsystem that allocates relative identifiers.";
		break;
	case 0x2014:
		return "The requested operation did not satisfy one or more constraints associated with the class of the object.";
		break;
	case 0x2015:
		return "The directory service can perform the requested operation only on a leaf object.";
		break;
	case 0x2016:
		return "The directory service cannot perform the requested operation on the relative distinguished name (RDN) attribute of an object.";
		break;
	case 0x2017:
		return "The directory service detected an attempt to modify the object class of an object.";
		break;
	case 0x2018:
		return "The requested cross-domain move operation could not be performed.";
		break;
	case 0x2019:
		return "Unable to contact the global catalog (GC) server.";
		break;
	case 0x201a:
		return "The policy object is shared and can only be modified at the root.";
		break;
	case 0x201b:
		return "The policy object does not exist.";
		break;
	case 0x201c:
		return "The requested policy information is only in the directory service.";
		break;
	case 0x201d:
		return "A domain controller promotion is currently active.";
		break;
	case 0x201e:
		return "A domain controller promotion is not currently active.";
		break;
	case 0x2020:
		return "An operations error occurred.";
		break;
	case 0x2021:
		return "A protocol error occurred.";
		break;
	case 0x2022:
		return "The time limit for this request was exceeded.";
		break;
	case 0x2023:
		return "The size limit for this request was exceeded.";
		break;
	case 0x2024:
		return "The administrative limit for this request was exceeded.";
		break;
	case 0x2025:
		return "The compare response was false.";
		break;
	case 0x2026:
		return "The compare response was true.";
		break;
	case 0x2027:
		return "The requested authentication method is not supported by the server.";
		break;
	case 0x2028:
		return "A more secure authentication method is required for this server.";
		break;
	case 0x2029:
		return "Inappropriate authentication.";
		break;
	case 0x202a:
		return "The authentication mechanism is unknown.";
		break;
	case 0x202b:
		return "A referral was returned from the server.";
		break;
	case 0x202c:
		return "The server does not support the requested critical extension.";
		break;
	case 0x202d:
		return "This request requires a secure connection.";
		break;
	case 0x202e:
		return "Inappropriate matching.";
		break;
	case 0x202f:
		return "A constraint violation occurred.";
		break;
	case 0x2030:
		return "There is no such object on the server.";
		break;
	case 0x2031:
		return "There is an alias problem.";
		break;
	case 0x2032:
		return "An invalid dn syntax has been specified.";
		break;
	case 0x2033:
		return "The object is a leaf object.";
		break;
	case 0x2034:
		return "There is an alias dereferencing problem.";
		break;
	case 0x2035:
		return "The server is unwilling to process the request.";
		break;
	case 0x2036:
		return "A loop has been detected.";
		break;
	case 0x2037:
		return "There is a naming violation.";
		break;
	case 0x2038:
		return "The result set is too large.";
		break;
	case 0x2039:
		return "The operation affects multiple DSAs.";
		break;
	case 0x203a:
		return "The server is not operational.";
		break;
	case 0x203b:
		return "A local error has occurred.";
		break;
	case 0x203c:
		return "An encoding error has occurred.";
		break;
	case 0x203d:
		return "A decoding error has occurred.";
		break;
	case 0x203e:
		return "The search filter cannot be recognized.";
		break;
	case 0x203f:
		return "One or more parameters are illegal.";
		break;
	case 0x2040:
		return "The specified method is not supported.";
		break;
	case 0x2041:
		return "No results were returned.";
		break;
	case 0x2042:
		return "The specified control is not supported by the server.";
		break;
	case 0x2043:
		return "A referral loop was detected by the client.";
		break;
	case 0x2044:
		return "The preset referral limit was exceeded.";
		break;
	case 0x2045:
		return "The search requires a SORT control.";
		break;
	case 0x2046:
		return "The search results exceed the offset range specified.";
		break;
	case 0x206d:
		return "The root object must be the head of a naming context. The root object cannot have an instantiated parent.";
		break;
	case 0x206e:
		return "The add replica operation cannot be performed. The naming context must be writable to create the replica.";
		break;
	case 0x206f:
		return "A reference to an attribute that is not defined in the schema occurred.";
		break;
	case 0x2070:
		return "The maximum size of an object has been exceeded.";
		break;
	case 0x2071:
		return "An attempt was made to add an object to the directory with a name that is already in use.";
		break;
	case 0x2072:
		return "An attempt was made to add an object of a class that does not have an RDN defined in the schema.";
		break;
	case 0x2073:
		return "An attempt was made to add an object using an RDN that is not the RDN defined in the schema.";
		break;
	case 0x2074:
		return "None of the requested attributes were found on the objects.";
		break;
	case 0x2075:
		return "The user buffer is too small.";
		break;
	case 0x2076:
		return "The attribute specified in the operation is not present on the object.";
		break;
	case 0x2077:
		return "Illegal modify operation. Some aspect of the modification is not permitted.";
		break;
	case 0x2078:
		return "The specified object is too large.";
		break;
	case 0x2079:
		return "The specified instance type is not valid.";
		break;
	case 0x207a:
		return "The operation must be performed at a master DSA.";
		break;
	case 0x207b:
		return "The object class attribute must be specified.";
		break;
	case 0x207c:
		return "A required attribute is missing.";
		break;
	case 0x207d:
		return "An attempt was made to modify an object to include an attribute that is not legal for its class.";
		break;
	case 0x207e:
		return "The specified attribute is already present on the object.";
		break;
	case 0x2080:
		return "The specified attribute is not present, or has no values.";
		break;
	case 0x2081:
		return "Multiple values were specified for an attribute that can have only one value.";
		break;
	case 0x2082:
		return "A value for the attribute was not in the acceptable range of values.";
		break;
	case 0x2083:
		return "The specified value already exists.";
		break;
	case 0x2084:
		return "The attribute cannot be removed because it is not present on the object.";
		break;
	case 0x2085:
		return "The attribute value cannot be removed because it is not present on the object.";
		break;
	case 0x2086:
		return "The specified root object cannot be a subreference.";
		break;
	case 0x2087:
		return "Chaining is not permitted.";
		break;
	case 0x2088:
		return "Chained evaluation is not permitted.";
		break;
	case 0x2089:
		return "The operation could not be performed because the object's parent is either uninstantiated or deleted.";
		break;
	case 0x208a:
		return "Having a parent that is an alias is not permitted. Aliases are leaf objects.";
		break;
	case 0x208b:
		return "The object and parent must be of the same type, either both masters or both replicas.";
		break;
	case 0x208c:
		return "The operation cannot be performed because child objects exist. This operation can only be performed on a leaf object.";
		break;
	case 0x208d:
		return "Directory object not found.";
		break;
	case 0x208e:
		return "The aliased object is missing.";
		break;
	case 0x208f:
		return "The object name has bad syntax.";
		break;
	case 0x2090:
		return "An alias is not permitted to refer to another alias.";
		break;
	case 0x2091:
		return "The alias cannot be dereferenced.";
		break;
	case 0x2092:
		return "The operation is out of scope.";
		break;
	case 0x2093:
		return "The operation cannot continue because the object is in the process of being removed.";
		break;
	case 0x2094:
		return "The DSA object cannot be deleted.";
		break;
	case 0x2095:
		return "A directory service error has occurred.";
		break;
	case 0x2096:
		return "The operation can only be performed on an internal master DSA object.";
		break;
	case 0x2097:
		return "The object must be of class DSA.";
		break;
	case 0x2098:
		return "Insufficient access rights to perform the operation.";
		break;
	case 0x2099:
		return "The object cannot be added because the parent is not on the list of possible superiors.";
		break;
	case 0x209a:
		return "Access to the attribute is not permitted because the attribute is owned by the SAM.";
		break;
	case 0x209b:
		return "The name has too many parts.";
		break;
	case 0x209c:
		return "The name is too long.";
		break;
	case 0x209d:
		return "The name value is too long.";
		break;
	case 0x209e:
		return "The directory service encountered an error parsing a name.";
		break;
	case 0x209f:
		return "The directory service cannot get the attribute type for a name.";
		break;
	case 0x20a0:
		return "The name does not identify an object; the name identifies a phantom.";
		break;
	case 0x20a1:
		return "The security descriptor is too short.";
		break;
	case 0x20a2:
		return "The security descriptor is invalid.";
		break;
	case 0x20a3:
		return "Failed to create name for deleted object.";
		break;
	case 0x20a4:
		return "The parent of a new subreference must exist.";
		break;
	case 0x20a5:
		return "The object must be a naming context.";
		break;
	case 0x20a6:
		return "It is not permitted to add an attribute that is owned by the system.";
		break;
	case 0x20a7:
		return "The class of the object must be structural; you cannot instantiate an abstract class.";
		break;
	case 0x20a8:
		return "The schema object could not be found.";
		break;
	case 0x20a9:
		return "A local object with this GUID (dead or alive) already exists.";
		break;
	case 0x20aa:
		return "The operation cannot be performed on a back link.";
		break;
	case 0x20ab:
		return "The cross-reference for the specified naming context could not be found.";
		break;
	case 0x20ac:
		return "The operation could not be performed because the directory service is shutting down.";
		break;
	case 0x20ad:
		return "The directory service request is invalid.";
		break;
	case 0x20ae:
		return "The role owner attribute could not be read.";
		break;
	case 0x20af:
		return "The requested Flexible Single Master Operations (FSMO) operation failed. The current FSMO holder could not be contacted.";
		break;
	case 0x20b0:
		return "Modification of a distinguished name across a naming context is not permitted.";
		break;
	case 0x20b1:
		return "The attribute cannot be modified because it is owned by the system.";
		break;
	case 0x20b2:
		return "Only the replicator can perform this function.";
		break;
	case 0x20b3:
		return "The specified class is not defined.";
		break;
	case 0x20b4:
		return "The specified class is not a subclass.";
		break;
	case 0x20b5:
		return "The name reference is invalid.";
		break;
	case 0x20b6:
		return "A cross-reference already exists.";
		break;
	case 0x20b7:
		return "It is not permitted to delete a master cross-reference.";
		break;
	case 0x20b8:
		return "Subtree notifications are only supported on naming context (NC) heads.";
		break;
	case 0x20b9:
		return "Notification filter is too complex.";
		break;
	case 0x20ba:
		return "Schema update failed: Duplicate RDN.";
		break;
	case 0x20bb:
		return "Schema update failed: Duplicate OID.";
		break;
	case 0x20bc:
		return "Schema update failed: Duplicate Message Application Programming Interface (MAPI) identifier.";
		break;
	case 0x20bd:
		return "Schema update failed: Duplicate schema ID GUID.";
		break;
	case 0x20be:
		return "Schema update failed: Duplicate LDAP display name.";
		break;
	case 0x20bf:
		return "Schema update failed: Range-Lower less than Range-Upper.";
		break;
	case 0x20c0:
		return "Schema update failed: Syntax mismatch.";
		break;
	case 0x20c1:
		return "Schema deletion failed: Attribute is used in the Must-Contain list.";
		break;
	case 0x20c2:
		return "Schema deletion failed: Attribute is used in the May-Contain list.";
		break;
	case 0x20c3:
		return "Schema update failed: Attribute in May-Contain list does not exist.";
		break;
	case 0x20c4:
		return "Schema update failed: Attribute in the Must-Contain list does not exist.";
		break;
	case 0x20c5:
		return "Schema update failed: Class in the Aux Class list does not exist or is not an auxiliary class.";
		break;
	case 0x20c6:
		return "Schema update failed: Class in the Poss-Superiors list does not exist.";
		break;
	case 0x20c7:
		return "Schema update failed: Class in the subclass of the list does not exist or does not satisfy hierarchy rules.";
		break;
	case 0x20c8:
		return "Schema update failed: Rdn-Att-Id has wrong syntax.";
		break;
	case 0x20c9:
		return "Schema deletion failed: Class is used as an auxiliary class.";
		break;
	case 0x20ca:
		return "Schema deletion failed: Class is used as a subclass.";
		break;
	case 0x20cb:
		return "Schema deletion failed: Class is used as a Poss-Superior.";
		break;
	case 0x20cc:
		return "Schema update failed in recalculating validation cache.";
		break;
	case 0x20cd:
		return "The tree deletion is not finished. The request must be made again to continue deleting the tree.";
		break;
	case 0x20ce:
		return "The requested delete operation could not be performed.";
		break;
	case 0x20cf:
		return "Cannot read the governs class identifier for the schema record.";
		break;
	case 0x20d0:
		return "The attribute schema has bad syntax.";
		break;
	case 0x20d1:
		return "The attribute could not be cached.";
		break;
	case 0x20d2:
		return "The class could not be cached.";
		break;
	case 0x20d3:
		return "The attribute could not be removed from the cache.";
		break;
	case 0x20d4:
		return "The class could not be removed from the cache.";
		break;
	case 0x20d5:
		return "The distinguished name attribute could not be read.";
		break;
	case 0x20d6:
		return "No superior reference has been configured for the directory service. The directory service is, therefore, unable to issue referrals to objects outside this forest.";
		break;
	case 0x20d7:
		return "The instance type attribute could not be retrieved.";
		break;
	case 0x20d8:
		return "An internal error has occurred.";
		break;
	case 0x20d9:
		return "A database error has occurred.";
		break;
	case 0x20da:
		return "The governsID attribute is missing.";
		break;
	case 0x20db:
		return "An expected attribute is missing.";
		break;
	case 0x20dc:
		return "The specified naming context is missing a cross-reference.";
		break;
	case 0x20dd:
		return "A security checking error has occurred.";
		break;
	case 0x20de:
		return "The schema is not loaded.";
		break;
	case 0x20df:
		return "Schema allocation failed. Check if the machine is running low on memory.";
		break;
	case 0x20e0:
		return "Failed to obtain the required syntax for the attribute schema.";
		break;
	case 0x20e1:
		return "The GC verification failed. The GC is not available or does not support the operation. Some part of the directory is currently not available.";
		break;
	case 0x20e2:
		return "The replication operation failed because of a schema mismatch between the servers involved.";
		break;
	case 0x20e3:
		return "The DSA object could not be found.";
		break;
	case 0x20e4:
		return "The naming context could not be found.";
		break;
	case 0x20e5:
		return "The naming context could not be found in the cache.";
		break;
	case 0x20e6:
		return "The child object could not be retrieved.";
		break;
	case 0x20e7:
		return "The modification was not permitted for security reasons.";
		break;
	case 0x20e8:
		return "The operation cannot replace the hidden record.";
		break;
	case 0x20e9:
		return "The hierarchy file is invalid.";
		break;
	case 0x20ea:
		return "The attempt to build the hierarchy table failed.";
		break;
	case 0x20eb:
		return "The directory configuration parameter is missing from the registry.";
		break;
	case 0x20ec:
		return "The attempt to count the address book indices failed.";
		break;
	case 0x20ed:
		return "The allocation of the hierarchy table failed.";
		break;
	case 0x20ee:
		return "The directory service encountered an internal failure.";
		break;
	case 0x20ef:
		return "The directory service encountered an unknown failure.";
		break;
	case 0x20f0:
		return "A root object requires a class of \"top\".";
		break;
	case 0x20f1:
		return "This directory server is shutting down, and cannot take ownership of new floating single-master operation roles.";
		break;
	case 0x20f2:
		return "The directory service is missing mandatory configuration information and is unable to determine the ownership of floating single-master operation roles.";
		break;
	case 0x20f3:
		return "The directory service was unable to transfer ownership of one or more floating single-master operation roles to other servers.";
		break;
	case 0x20f4:
		return "The replication operation failed.";
		break;
	case 0x20f5:
		return "An invalid parameter was specified for this replication operation.";
		break;
	case 0x20f6:
		return "The directory service is too busy to complete the replication operation at this time.";
		break;
	case 0x20f7:
		return "The DN specified for this replication operation is invalid.";
		break;
	case 0x20f8:
		return "The naming context specified for this replication operation is invalid.";
		break;
	case 0x20f9:
		return "The DN specified for this replication operation already exists.";
		break;
	case 0x20fa:
		return "The replication system encountered an internal error.";
		break;
	case 0x20fb:
		return "The replication operation encountered a database inconsistency.";
		break;
	case 0x20fc:
		return "The server specified for this replication operation could not be contacted.";
		break;
	case 0x20fd:
		return "The replication operation encountered an object with an invalid instance type.";
		break;
	case 0x20fe:
		return "The replication operation failed to allocate memory.";
		break;
	case 0x20ff:
		return "The replication operation encountered an error with the mail system.";
		break;
	case 0x2100:
		return "The replication reference information for the target server already exists.";
		break;
	case 0x2101:
		return "The replication reference information for the target server does not exist.";
		break;
	case 0x2102:
		return "The naming context cannot be removed because it is replicated to another server.";
		break;
	case 0x2103:
		return "The replication operation encountered a database error.";
		break;
	case 0x2104:
		return "The naming context is in the process of being removed or is not replicated from the specified server.";
		break;
	case 0x2105:
		return "Replication access was denied.";
		break;
	case 0x2106:
		return "The requested operation is not supported by this version of the directory service.";
		break;
	case 0x2107:
		return "The replication RPC was canceled.";
		break;
	case 0x2108:
		return "The source server is currently rejecting replication requests.";
		break;
	case 0x2109:
		return "The destination server is currently rejecting replication requests.";
		break;
	case 0x210a:
		return "The replication operation failed due to a collision of object names.";
		break;
	case 0x210b:
		return "The replication source has been reinstalled.";
		break;
	case 0x210c:
		return "The replication operation failed because a required parent object is missing.";
		break;
	case 0x210d:
		return "The replication operation was preempted.";
		break;
	case 0x210e:
		return "The replication synchronization attempt was abandoned because of a lack of updates.";
		break;
	case 0x210f:
		return "The replication operation was terminated because the system is shutting down.";
		break;
	case 0x2110:
		return "A synchronization attempt failed because the destination DC is currently waiting to synchronize new partial attributes from the source. This condition is normal if a recent schema change modified the partial attribute set. The destination partial attribute set is not a subset of the source partial attribute set.";
		break;
	case 0x2111:
		return "The replication synchronization attempt failed because a master replica attempted to sync from a partial replica.";
		break;
	case 0x2112:
		return "The server specified for this replication operation was contacted, but that server was unable to contact an additional server needed to complete the operation.";
		break;
	case 0x2113:
		return "The version of the directory service schema of the source forest is not compatible with the version of the directory service on this computer.";
		break;
	case 0x2114:
		return "Schema update failed: An attribute with the same link identifier already exists.";
		break;
	case 0x2115:
		return "Name translation: Generic processing error.";
		break;
	case 0x2116:
		return "Name translation: Could not find the name or insufficient right to see name.";
		break;
	case 0x2117:
		return "Name translation: Input name mapped to more than one output name.";
		break;
	case 0x2118:
		return "Name translation: The input name was found but not the associated output format.";
		break;
	case 0x2119:
		return "Name translation: Unable to resolve completely, only the domain was found.";
		break;
	case 0x211a:
		return "Name translation: Unable to perform purely syntactical mapping at the client without going out to the wire.";
		break;
	case 0x211b:
		return "Modification of a constructed attribute is not allowed.";
		break;
	case 0x211c:
		return "The OM-Object-Class specified is incorrect for an attribute with the specified syntax.";
		break;
	case 0x211d:
		return "The replication request has been posted; waiting for a reply.";
		break;
	case 0x211e:
		return "The requested operation requires a directory service, and none was available.";
		break;
	case 0x211f:
		return "The LDAP display name of the class or attribute contains non-ASCII characters.";
		break;
	case 0x2120:
		return "The requested search operation is only supported for base searches.";
		break;
	case 0x2121:
		return "The search failed to retrieve attributes from the database.";
		break;
	case 0x2122:
		return "The schema update operation tried to add a backward link attribute that has no corresponding forward link.";
		break;
	case 0x2123:
		return "The source and destination of a cross-domain move do not agree on the object's epoch number. Either the source or the destination does not have the latest version of the object.";
		break;
	case 0x2124:
		return "The source and destination of a cross-domain move do not agree on the object's current name. Either the source or the destination does not have the latest version of the object.";
		break;
	case 0x2125:
		return "The source and destination for the cross-domain move operation are identical. The caller should use a local move operation instead of a cross-domain move operation.";
		break;
	case 0x2126:
		return "The source and destination for a cross-domain move do not agree on the naming contexts in the forest. Either the source or the destination does not have the latest version of the Partitions container.";
		break;
	case 0x2127:
		return "The destination of a cross-domain move is not authoritative for the destination naming context.";
		break;
	case 0x2128:
		return "The source and destination of a cross-domain move do not agree on the identity of the source object. Either the source or the destination does not have the latest version of the source object.";
		break;
	case 0x2129:
		return "The object being moved across domains is already known to be deleted by the destination server. The source server does not have the latest version of the source object.";
		break;
	case 0x212a:
		return "Another operation that requires exclusive access to the PDC FSMO is already in progress.";
		break;
	case 0x212b:
		return "A cross-domain move operation failed because two versions of the moved object exist—one each in the source and destination domains. The destination object needs to be removed to restore the system to a consistent state.";
		break;
	case 0x212c:
		return "This object cannot be moved across domain boundaries either because cross-domain moves for this class are not allowed, or the object has some special characteristics, for example, a trust account or a restricted relative identifier (RID), that prevent its move.";
		break;
	case 0x212d:
		return "Cannot move objects with memberships across domain boundaries because, once moved, this violates the membership conditions of the account group. Remove the object from any account group memberships and retry.";
		break;
	case 0x212e:
		return "A naming context head must be the immediate child of another naming context head, not of an interior node.";
		break;
	case 0x212f:
		return "The directory cannot validate the proposed naming context name because it does not hold a replica of the naming context above the proposed naming context. Ensure that the domain naming master role is held by a server that is configured as a GC server, and that the server is up-to-date with its replication partners. (Applies only to Windows 2000 operating system domain naming masters.)";
		break;
	case 0x2130:
		return "Destination domain must be in native mode.";
		break;
	case 0x2131:
		return "The operation cannot be performed because the server does not have an infrastructure container in the domain of interest.";
		break;
	case 0x2132:
		return "Cross-domain moves of nonempty account groups is not allowed.";
		break;
	case 0x2133:
		return "Cross-domain moves of nonempty resource groups is not allowed.";
		break;
	case 0x2134:
		return "The search flags for the attribute are invalid. The ambiguous name resolution (ANR) bit is valid only on attributes of Unicode or Teletex strings.";
		break;
	case 0x2135:
		return "Tree deletions starting at an object that has an NC head as a descendant are not allowed.";
		break;
	case 0x2136:
		return "The directory service failed to lock a tree in preparation for a tree deletion because the tree was in use.";
		break;
	case 0x2137:
		return "The directory service failed to identify the list of objects to delete while attempting a tree deletion.";
		break;
	case 0x2138:
		return "SAM initialization failed because of the following error: %1. Error Status: 0x%2. Click OK to shut down the system and reboot into Directory Services Restore Mode. Check the event log for detailed information.";
		break;
	case 0x2139:
		return "Only an administrator can modify the membership list of an administrative group.";
		break;
	case 0x213a:
		return "Cannot change the primary group ID of a domain controller account.";
		break;
	case 0x213b:
		return "An attempt was made to modify the base schema.";
		break;
	case 0x213c:
		return "Adding a new mandatory attribute to an existing class, deleting a mandatory attribute from an existing class, or adding an optional attribute to the special class Top that is not a backlink attribute (directly or through inheritance, for example, by adding or deleting an auxiliary class) is not allowed.";
		break;
	case 0x213d:
		return "Schema update is not allowed on this DC because the DC is not the schema FSMO role owner.";
		break;
	case 0x213e:
		return "An object of this class cannot be created under the schema container. You can only create Attribute-Schema and Class-Schema objects under the schema container.";
		break;
	case 0x213f:
		return "The replica or child install failed to get the objectVersion attribute on the schema container on the source DC. Either the attribute is missing on the schema container or the credentials supplied do not have permission to read it.";
		break;
	case 0x2140:
		return "The replica or child install failed to read the objectVersion attribute in the SCHEMA section of the file schema.ini in the System32 directory.";
		break;
	case 0x2141:
		return "The specified group type is invalid.";
		break;
	case 0x2142:
		return "You cannot nest global groups in a mixed domain if the group is security-enabled.";
		break;
	case 0x2143:
		return "You cannot nest local groups in a mixed domain if the group is security-enabled.";
		break;
	case 0x2144:
		return "A global group cannot have a local group as a member.";
		break;
	case 0x2145:
		return "A global group cannot have a universal group as a member.";
		break;
	case 0x2146:
		return "A universal group cannot have a local group as a member.";
		break;
	case 0x2147:
		return "A global group cannot have a cross-domain member.";
		break;
	case 0x2148:
		return "A local group cannot have another cross domain local group as a member.";
		break;
	case 0x2149:
		return "A group with primary members cannot change to a security-disabled group.";
		break;
	case 0x214a:
		return "The schema cache load failed to convert the string default security descriptor (SD) on a class-schema object.";
		break;
	case 0x214b:
		return "Only DSAs configured to be GC servers should be allowed to hold the domain naming master FSMO role. (Applies only to Windows 2000 servers.)";
		break;
	case 0x214c:
		return "The DSA operation is unable to proceed because of a DNS lookup failure.";
		break;
	case 0x214d:
		return "While processing a change to the DNS host name for an object, the SPN values could not be kept in sync.";
		break;
	case 0x214e:
		return "The Security Descriptor attribute could not be read.";
		break;
	case 0x214f:
		return "The object requested was not found, but an object with that key was found.";
		break;
	case 0x2150:
		return "The syntax of the linked attribute being added is incorrect. Forward links can only have syntax 2.5.5.1, 2.5.5.7, and 2.5.5.14, and backlinks can only have syntax 2.5.5.1.";
		break;
	case 0x2151:
		return "SAM needs to get the boot password.";
		break;
	case 0x2152:
		return "SAM needs to get the boot key from the floppy disk.";
		break;
	case 0x2153:
		return "Directory Service cannot start.";
		break;
	case 0x2154:
		return "Directory Services could not start.";
		break;
	case 0x2155:
		return "The connection between client and server requires packet privacy or better.";
		break;
	case 0x2156:
		return "The source domain cannot be in the same forest as the destination.";
		break;
	case 0x2157:
		return "The destination domain MUST be in the forest.";
		break;
	case 0x2158:
		return "The operation requires that destination domain auditing be enabled.";
		break;
	case 0x2159:
		return "The operation could not locate a DC for the source domain.";
		break;
	case 0x215a:
		return "The source object must be a group or user.";
		break;
	case 0x215b:
		return "The source object's SID already exists in the destination forest.";
		break;
	case 0x215c:
		return "The source and destination object must be of the same type.";
		break;
	case 0x215d:
		return "SAM initialization failed because of the following error: %1. Error Status: 0x%2. Click OK to shut down the system and reboot into Safe Mode. Check the event log for detailed information.";
		break;
	case 0x215e:
		return "Schema information could not be included in the replication request.";
		break;
	case 0x215f:
		return "The replication operation could not be completed due to a schema incompatibility.";
		break;
	case 0x2160:
		return "The replication operation could not be completed due to a previous schema incompatibility.";
		break;
	case 0x2161:
		return "The replication update could not be applied because either the source or the destination has not yet received information regarding a recent cross-domain move operation.";
		break;
	case 0x2162:
		return "The requested domain could not be deleted because there exist domain controllers that still host this domain.";
		break;
	case 0x2163:
		return "The requested operation can be performed only on a GC server.";
		break;
	case 0x2164:
		return "A local group can only be a member of other local groups in the same domain.";
		break;
	case 0x2165:
		return "Foreign security principals cannot be members of universal groups.";
		break;
	case 0x2166:
		return "The attribute is not allowed to be replicated to the GC because of security reasons.";
		break;
	case 0x2167:
		return "The checkpoint with the PDC could not be taken because too many modifications are currently being processed.";
		break;
	case 0x2168:
		return "The operation requires that source domain auditing be enabled.";
		break;
	case 0x2169:
		return "Security principal objects can only be created inside domain naming contexts.";
		break;
	case 0x216a:
		return "An SPN could not be constructed because the provided host name is not in the necessary format.";
		break;
	case 0x216b:
		return "A filter was passed that uses constructed attributes.";
		break;
	case 0x216c:
		return "The unicodePwd attribute value must be enclosed in quotation marks.";
		break;
	case 0x216d:
		return "Your computer could not be joined to the domain. You have exceeded the maximum number of computer accounts you are allowed to create in this domain. Contact your system administrator to have this limit reset or increased.";
		break;
	case 0x216e:
		return "For security reasons, the operation must be run on the destination DC.";
		break;
	case 0x216f:
		return "For security reasons, the source DC must be NT4SP4 or greater.";
		break;
	case 0x2170:
		return "Critical directory service system objects cannot be deleted during tree deletion operations. The tree deletion might have been partially performed.";
		break;
	case 0x2171:
		return "Directory Services could not start because of the following error: %1. Error Status: 0x%2. Click OK to shut down the system. You can use the Recovery Console to further diagnose the system.";
		break;
	case 0x2172:
		return "SAM initialization failed because of the following error: %1. Error Status: 0x%2. Click OK to shut down the system. You can use the Recovery Console to further diagnose the system.";
		break;
	case 0x2173:
		return "The version of the operating system installed is incompatible with the current forest functional level. You must upgrade to a new version of the operating system before this server can become a domain controller in this forest.";
		break;
	case 0x2174:
		return "The version of the operating system installed is incompatible with the current domain functional level. You must upgrade to a new version of the operating system before this server can become a domain controller in this domain.";
		break;
	case 0x2175:
		return "The version of the operating system installed on this server no longer supports the current forest functional level. You must raise the forest functional level before this server can become a domain controller in this forest.";
		break;
	case 0x2176:
		return "The version of the operating system installed on this server no longer supports the current domain functional level. You must raise the domain functional level before this server can become a domain controller in this domain.";
		break;
	case 0x2177:
		return "The version of the operating system installed on this server is incompatible with the functional level of the domain or forest.";
		break;
	case 0x2178:
		return "The functional level of the domain (or forest) cannot be raised to the requested value because one or more domain controllers in the domain (or forest) are at a lower, incompatible functional level.";
		break;
	case 0x2179:
		return "The forest functional level cannot be raised to the requested value because one or more domains are still in mixed-domain mode. All domains in the forest must be in native mode for you to raise the forest functional level.";
		break;
	case 0x217a:
		return "The sort order requested is not supported.";
		break;
	case 0x217b:
		return "The requested name already exists as a unique identifier.";
		break;
	case 0x217c:
		return "The machine account was created before Windows NT 4.0. The account needs to be re-created.";
		break;
	case 0x217d:
		return "The database is out of version store.";
		break;
	case 0x217e:
		return "Unable to continue operation because multiple conflicting controls were used.";
		break;
	case 0x217f:
		return "Unable to find a valid security descriptor reference domain for this partition.";
		break;
	case 0x2180:
		return "Schema update failed: The link identifier is reserved.";
		break;
	case 0x2181:
		return "Schema update failed: There are no link identifiers available.";
		break;
	case 0x2182:
		return "An account group cannot have a universal group as a member.";
		break;
	case 0x2183:
		return "Rename or move operations on naming context heads or read-only objects are not allowed.";
		break;
	case 0x2184:
		return "Move operations on objects in the schema naming context are not allowed.";
		break;
	case 0x2185:
		return "A system flag has been set on the object that does not allow the object to be moved or renamed.";
		break;
	case 0x2186:
		return "This object is not allowed to change its grandparent container. Moves are not forbidden on this object, but are restricted to sibling containers.";
		break;
	case 0x2187:
		return "Unable to resolve completely; a referral to another forest was generated.";
		break;
	case 0x2188:
		return "The requested action is not supported on a standard server.";
		break;
	case 0x2189:
		return "Could not access a partition of the directory service located on a remote server. Make sure at least one server is running for the partition in question.";
		break;
	case 0x218a:
		return "The directory cannot validate the proposed naming context (or partition) name because it does not hold a replica, nor can it contact a replica of the naming context above the proposed naming context. Ensure that the parent naming context is properly registered in the DNS, and at least one replica of this naming context is reachable by the domain naming master.";
		break;
	case 0x218b:
		return "The thread limit for this request was exceeded.";
		break;
	case 0x218c:
		return "The GC server is not in the closest site.";
		break;
	case 0x218d:
		return "The directory service cannot derive an SPN with which to mutually authenticate the target server because the corresponding server object in the local DS database has no serverReference attribute.";
		break;
	case 0x218e:
		return "The directory service failed to enter single-user mode.";
		break;
	case 0x218f:
		return "The directory service cannot parse the script because of a syntax error.";
		break;
	case 0x2190:
		return "The directory service cannot process the script because of an error.";
		break;
	case 0x2191:
		return "The directory service cannot perform the requested operation because the servers involved are of different replication epochs (which is usually related to a domain rename that is in progress).";
		break;
	case 0x2192:
		return "The directory service binding must be renegotiated due to a change in the server extensions information.";
		break;
	case 0x2193:
		return "The operation is not allowed on a disabled cross-reference.";
		break;
	case 0x2194:
		return "Schema update failed: No values for msDS-IntId are available.";
		break;
	case 0x2195:
		return "Schema update failed: Duplicate msDS-IntId. Retry the operation.";
		break;
	case 0x2196:
		return "Schema deletion failed: Attribute is used in rDNAttID.";
		break;
	case 0x2197:
		return "The directory service failed to authorize the request.";
		break;
	case 0x2198:
		return "The directory service cannot process the script because it is invalid.";
		break;
	case 0x2199:
		return "The remote create cross-reference operation failed on the domain naming master FSMO. The operation's error is in the extended data.";
		break;
	case 0x219a:
		return "A cross-reference is in use locally with the same name.";
		break;
	case 0x219b:
		return "The directory service cannot derive an SPN with which to mutually authenticate the target server because the server's domain has been deleted from the forest.";
		break;
	case 0x219c:
		return "Writable NCs prevent this DC from demoting.";
		break;
	case 0x219d:
		return "The requested object has a nonunique identifier and cannot be retrieved.";
		break;
	case 0x219e:
		return "Insufficient attributes were given to create an object. This object might not exist because it might have been deleted and the garbage already collected.";
		break;
	case 0x219f:
		return "The group cannot be converted due to attribute restrictions on the requested group type.";
		break;
	case 0x21a0:
		return "Cross-domain moves of nonempty basic application groups is not allowed.";
		break;
	case 0x21a1:
		return "Cross-domain moves of nonempty query-based application groups is not allowed.";
		break;
	case 0x21a2:
		return "The FSMO role ownership could not be verified because its directory partition did not replicate successfully with at least one replication partner.";
		break;
	case 0x21a3:
		return "The target container for a redirection of a well-known object container cannot already be a special container.";
		break;
	case 0x21a4:
		return "The directory service cannot perform the requested operation because a domain rename operation is in progress.";
		break;
	case 0x21a5:
		return "The directory service detected a child partition below the requested partition name. The partition hierarchy must be created in a top down method.";
		break;
	case 0x21a6:
		return "The directory service cannot replicate with this server because the time since the last replication with this server has exceeded the tombstone lifetime.";
		break;
	case 0x21a7:
		return "The requested operation is not allowed on an object under the system container.";
		break;
	case 0x21a8:
		return "The LDAP server's network send queue has filled up because the client is not processing the results of its requests fast enough. No more requests will be processed until the client catches up. If the client does not catch up then it will be disconnected.";
		break;
	case 0x21a9:
		return "The scheduled replication did not take place because the system was too busy to execute the request within the schedule window. The replication queue is overloaded. Consider reducing the number of partners or decreasing the scheduled replication frequency.";
		break;
	case 0x21aa:
		return "At this time, it cannot be determined if the branch replication policy is available on the hub domain controller. Retry at a later time to account for replication latencies.";
		break;
	case 0x21ab:
		return "The site settings object for the specified site does not exist.";
		break;
	case 0x21ac:
		return "The local account store does not contain secret material for the specified account.";
		break;
	case 0x21ad:
		return "Could not find a writable domain controller in the domain.";
		break;
	case 0x21ae:
		return "The server object for the domain controller does not exist.";
		break;
	case 0x21af:
		return "The NTDS Settings object for the domain controller does not exist.";
		break;
	case 0x21b0:
		return "The requested search operation is not supported for attribute scoped query (ASQ) searches.";
		break;
	case 0x21b1:
		return "A required audit event could not be generated for the operation.";
		break;
	case 0x21b2:
		return "The search flags for the attribute are invalid. The subtree index bit is valid only on single-valued attributes.";
		break;
	case 0x21b3:
		return "The search flags for the attribute are invalid. The tuple index bit is valid only on attributes of Unicode strings.";
		break;
	case 0x21bf:
		return "The replication operation failed because the target object referenced by a link value is recycled.";
		break;
	case 0x21c2:
		return "The functional level of the domain (or forest) cannot be lowered to the requested value.";
		break;
	case 0x21c7:
		return "The operation failed because the SPN value provided for addition/modification is not unique forest-wide.";
		break;
	case 0x21c8:
		return "The operation failed because the UPN value provided for addition/modification is not unique forest-wide.";
		break;
	case 0x2329:
		return "DNS server unable to interpret format.";
		break;
	case 0x232a:
		return "DNS server failure.";
		break;
	case 0x232b:
		return "DNS name does not exist.";
		break;
	case 0x232c:
		return "DNS request not supported by name server.";
		break;
	case 0x232d:
		return "DNS operation refused.";
		break;
	case 0x232e:
		return "DNS name that should not exist, does exist.";
		break;
	case 0x232f:
		return "DNS resource record (RR) set that should not exist, does exist.";
		break;
	case 0x2330:
		return "DNS RR set that should to exist, does not exist.";
		break;
	case 0x2331:
		return "DNS server not authoritative for zone.";
		break;
	case 0x2332:
		return "DNS name in update or prereq is not in zone.";
		break;
	case 0x2338:
		return "DNS signature failed to verify.";
		break;
	case 0x2339:
		return "DNS bad key.";
		break;
	case 0x233a:
		return "DNS signature validity expired.";
		break;
	case 0x251d:
		return "No records found for given DNS query.";
		break;
	case 0x251e:
		return "Bad DNS packet.";
		break;
	case 0x251f:
		return "No DNS packet.";
		break;
	case 0x2520:
		return "DNS error, check rcode.";
		break;
	case 0x2521:
		return "Unsecured DNS packet.";
		break;
	case 0x254f:
		return "Invalid DNS type.";
		break;
	case 0x2550:
		return "Invalid IP address.";
		break;
	case 0x2551:
		return "Invalid property.";
		break;
	case 0x2552:
		return "Try DNS operation again later.";
		break;
	case 0x2553:
		return "Record for given name and type is not unique.";
		break;
	case 0x2554:
		return "DNS name does not comply with RFC specifications.";
		break;
	case 0x2555:
		return "DNS name is a fully qualified DNS name.";
		break;
	case 0x2556:
		return "DNS name is dotted (multilabel).";
		break;
	case 0x2557:
		return "DNS name is a single-part name.";
		break;
	case 0x2558:
		return "DNS name contains an invalid character.";
		break;
	case 0x2559:
		return "DNS name is entirely numeric.";
		break;
	case 0x255a:
		return "The operation requested is not permitted on a DNS root server.";
		break;
	case 0x255b:
		return "The record could not be created because this part of the DNS namespace has been delegated to another server.";
		break;
	case 0x255c:
		return "The DNS server could not find a set of root hints.";
		break;
	case 0x255d:
		return "The DNS server found root hints but they were not consistent across all adapters.";
		break;
	case 0x255e:
		return "The specified value is too small for this parameter.";
		break;
	case 0x255f:
		return "The specified value is too large for this parameter.";
		break;
	case 0x2560:
		return "This operation is not allowed while the DNS server is loading zones in the background. Try again later.";
		break;
	case 0x2561:
		return "The operation requested is not permitted on against a DNS server running on a read-only DC.";
		break;
	case 0x2581:
		return "DNS zone does not exist.";
		break;
	case 0x2582:
		return "DNS zone information not available.";
		break;
	case 0x2583:
		return "Invalid operation for DNS zone.";
		break;
	case 0x2584:
		return "Invalid DNS zone configuration.";
		break;
	case 0x2585:
		return "DNS zone has no start of authority (SOA) record.";
		break;
	case 0x2586:
		return "DNS zone has no Name Server (NS) record.";
		break;
	case 0x2587:
		return "DNS zone is locked.";
		break;
	case 0x2588:
		return "DNS zone creation failed.";
		break;
	case 0x2589:
		return "DNS zone already exists.";
		break;
	case 0x258a:
		return "DNS automatic zone already exists.";
		break;
	case 0x258b:
		return "Invalid DNS zone type.";
		break;
	case 0x258c:
		return "Secondary DNS zone requires master IP address.";
		break;
	case 0x258d:
		return "DNS zone not secondary.";
		break;
	case 0x258e:
		return "Need secondary IP address.";
		break;
	case 0x258f:
		return "WINS initialization failed.";
		break;
	case 0x2590:
		return "Need WINS servers.";
		break;
	case 0x2591:
		return "NBTSTAT initialization call failed.";
		break;
	case 0x2592:
		return "Invalid delete of SOA.";
		break;
	case 0x2593:
		return "A conditional forwarding zone already exists for that name.";
		break;
	case 0x2594:
		return "This zone must be configured with one or more master DNS server IP addresses.";
		break;
	case 0x2595:
		return "The operation cannot be performed because this zone is shut down.";
		break;
	case 0x25b3:
		return "The primary DNS zone requires a data file.";
		break;
	case 0x25b4:
		return "Invalid data file name for the DNS zone.";
		break;
	case 0x25b5:
		return "Failed to open the data file for the DNS zone.";
		break;
	case 0x25b6:
		return "Failed to write the data file for the DNS zone.";
		break;
	case 0x25b7:
		return "Failure while reading datafile for DNS zone.";
		break;
	case 0x25e5:
		return "DNS record does not exist.";
		break;
	case 0x25e6:
		return "DNS record format error.";
		break;
	case 0x25e7:
		return "Node creation failure in DNS.";
		break;
	case 0x25e8:
		return "Unknown DNS record type.";
		break;
	case 0x25e9:
		return "DNS record timed out.";
		break;
	case 0x25ea:
		return "Name not in DNS zone.";
		break;
	case 0x25eb:
		return "CNAME loop detected.";
		break;
	case 0x25ec:
		return "Node is a CNAME DNS record.";
		break;
	case 0x25ed:
		return "A CNAME record already exists for the given name.";
		break;
	case 0x25ee:
		return "Record is only at DNS zone root.";
		break;
	case 0x25ef:
		return "DNS record already exists.";
		break;
	case 0x25f0:
		return "Secondary DNS zone data error.";
		break;
	case 0x25f1:
		return "Could not create DNS cache data.";
		break;
	case 0x25f2:
		return "DNS name does not exist.";
		break;
	case 0x25f3:
		return "Could not create pointer (PTR) record.";
		break;
	case 0x25f4:
		return "DNS domain was undeleted.";
		break;
	case 0x25f5:
		return "The directory service is unavailable.";
		break;
	case 0x25f6:
		return "DNS zone already exists in the directory service.";
		break;
	case 0x25f7:
		return "DNS server not creating or reading the boot file for the directory service integrated DNS zone.";
		break;
	case 0x2617:
		return "DNS AXFR (zone transfer) complete.";
		break;
	case 0x2618:
		return "DNS zone transfer failed.";
		break;
	case 0x2619:
		return "Added local WINS server.";
		break;
	case 0x2649:
		return "Secure update call needs to continue update request.";
		break;
	case 0x267b:
		return "TCP/IP network protocol not installed.";
		break;
	case 0x267c:
		return "No DNS servers configured for local system.";
		break;
	case 0x26ad:
		return "The specified directory partition does not exist.";
		break;
	case 0x26ae:
		return "The specified directory partition already exists.";
		break;
	case 0x26af:
		return "This DNS server is not enlisted in the specified directory partition.";
		break;
	case 0x26b0:
		return "This DNS server is already enlisted in the specified directory partition.";
		break;
	case 0x26b1:
		return "The directory partition is not available at this time. Wait a few minutes and try again.";
		break;
	case 0x26b2:
		return "The application directory partition operation failed. The domain controller holding the domain naming master role is down or unable to service the request or is not running Windows Server 2003.";
		break;
	case 0x2714:
		return "A blocking operation was interrupted by a call to WSACancelBlockingCall.";
		break;
	case 0x2719:
		return "The file handle supplied is not valid.";
		break;
	case 0x271d:
		return "An attempt was made to access a socket in a way forbidden by its access permissions.";
		break;
	case 0x271e:
		return "The system detected an invalid pointer address in attempting to use a pointer argument in a call.";
		break;
	case 0x2726:
		return "An invalid argument was supplied.";
		break;
	case 0x2728:
		return "Too many open sockets.";
		break;
	case 0x2733:
		return "A nonblocking socket operation could not be completed immediately.";
		break;
	case 0x2734:
		return "A blocking operation is currently executing.";
		break;
	case 0x2735:
		return "An operation was attempted on a nonblocking socket that already had an operation in progress.";
		break;
	case 0x2736:
		return "An operation was attempted on something that is not a socket.";
		break;
	case 0x2737:
		return "A required address was omitted from an operation on a socket.";
		break;
	case 0x2738:
		return "A message sent on a datagram socket was larger than the internal message buffer or some other network limit, or the buffer used to receive a datagram into was smaller than the datagram itself.";
		break;
	case 0x2739:
		return "A protocol was specified in the socket function call that does not support the semantics of the socket type requested.";
		break;
	case 0x273a:
		return "An unknown, invalid, or unsupported option or level was specified in a getsockopt or setsockopt call.";
		break;
	case 0x273b:
		return "The requested protocol has not been configured into the system, or no implementation for it exists.";
		break;
	case 0x273c:
		return "The support for the specified socket type does not exist in this address family.";
		break;
	case 0x273d:
		return "The attempted operation is not supported for the type of object referenced.";
		break;
	case 0x273e:
		return "The protocol family has not been configured into the system or no implementation for it exists.";
		break;
	case 0x273f:
		return "An address incompatible with the requested protocol was used.";
		break;
	case 0x2740:
		return "Only one usage of each socket address (protocol/network address/port) is normally permitted.";
		break;
	case 0x2741:
		return "The requested address is not valid in its context.";
		break;
	case 0x2742:
		return "A socket operation encountered a dead network.";
		break;
	case 0x2743:
		return "A socket operation was attempted to an unreachable network.";
		break;
	case 0x2744:
		return "The connection has been broken due to keep-alive activity detecting a failure while the operation was in progress.";
		break;
	case 0x2745:
		return "An established connection was aborted by the software in your host machine.";
		break;
	case 0x2746:
		return "An existing connection was forcibly closed by the remote host.";
		break;
	case 0x2747:
		return "An operation on a socket could not be performed because the system lacked sufficient buffer space or because a queue was full.";
		break;
	case 0x2748:
		return "A connect request was made on an already connected socket.";
		break;
	case 0x2749:
		return "A request to send or receive data was disallowed because the socket is not connected and (when sending on a datagram socket using a sendto call) no address was supplied.";
		break;
	case 0x274a:
		return "A request to send or receive data was disallowed because the socket had already been shut down in that direction with a previous shutdown call.";
		break;
	case 0x274b:
		return "Too many references to a kernel object.";
		break;
	case 0x274c:
		return "A connection attempt failed because the connected party did not properly respond after a period of time, or the established connection failed because the connected host failed to respond.";
		break;
	case 0x274d:
		return "No connection could be made because the target machine actively refused it.";
		break;
	case 0x274e:
		return "Cannot translate name.";
		break;
	case 0x274f:
		return "Name or name component was too long.";
		break;
	case 0x2750:
		return "A socket operation failed because the destination host was down.";
		break;
	case 0x2751:
		return "A socket operation was attempted to an unreachable host.";
		break;
	case 0x2752:
		return "Cannot remove a directory that is not empty.";
		break;
	case 0x2753:
		return "A Windows Sockets implementation might have a limit on the number of applications that can use it simultaneously.";
		break;
	case 0x2754:
		return "Ran out of quota.";
		break;
	case 0x2755:
		return "Ran out of disk quota.";
		break;
	case 0x2756:
		return "File handle reference is no longer available.";
		break;
	case 0x2757:
		return "Item is not available locally.";
		break;
	case 0x276b:
		return "WSAStartup cannot function at this time because the underlying system it uses to provide network services is currently unavailable.";
		break;
	case 0x276c:
		return "The Windows Sockets version requested is not supported.";
		break;
	case 0x276d:
		return "Either the application has not called WSAStartup, or WSAStartup failed.";
		break;
	case 0x2775:
		return "Returned by WSARecv or WSARecvFrom to indicate that the remote party has initiated a graceful shutdown sequence.";
		break;
	case 0x2776:
		return "No more results can be returned by WSALookupServiceNext.";
		break;
	case 0x2777:
		return "A call to WSALookupServiceEnd was made while this call was still processing. The call has been canceled.";
		break;
	case 0x2778:
		return "The procedure call table is invalid.";
		break;
	case 0x2779:
		return "The requested service provider is invalid.";
		break;
	case 0x277a:
		return "The requested service provider could not be loaded or initialized.";
		break;
	case 0x277b:
		return "A system call that should never fail has failed.";
		break;
	case 0x277c:
		return "No such service is known. The service cannot be found in the specified namespace.";
		break;
	case 0x277d:
		return "The specified class was not found.";
		break;
	case 0x277e:
		return "No more results can be returned by WSALookupServiceNext.";
		break;
	case 0x277f:
		return "A call to WSALookupServiceEnd was made while this call was still processing. The call has been canceled.";
		break;
	case 0x2780:
		return "A database query failed because it was actively refused.";
		break;
	case 0x2af9:
		return "No such host is known.";
		break;
	case 0x2afa:
		return "This is usually a temporary error during host name resolution and means that the local server did not receive a response from an authoritative server.";
		break;
	case 0x2afb:
		return "A nonrecoverable error occurred during a database lookup.";
		break;
	case 0x2afc:
		return "The requested name is valid, but no data of the requested type was found.";
		break;
	case 0x2afd:
		return "At least one reserve has arrived.";
		break;
	case 0x2afe:
		return "At least one path has arrived.";
		break;
	case 0x2aff:
		return "There are no senders.";
		break;
	case 0x2b00:
		return "There are no receivers.";
		break;
	case 0x2b01:
		return "Reserve has been confirmed.";
		break;
	case 0x2b02:
		return "Error due to lack of resources.";
		break;
	case 0x2b03:
		return "Rejected for administrative reasons—bad credentials.";
		break;
	case 0x2b04:
		return "Unknown or conflicting style.";
		break;
	case 0x2b05:
		return "There is a problem with some part of the filterspec or provider-specific buffer in general.";
		break;
	case 0x2b06:
		return "There is a problem with some part of the flowspec.";
		break;
	case 0x2b07:
		return "General quality of serve (QOS) error.";
		break;
	case 0x2b08:
		return "An invalid or unrecognized service type was found in the flowspec.";
		break;
	case 0x2b09:
		return "An invalid or inconsistent flowspec was found in the QOS structure.";
		break;
	case 0x2b0a:
		return "Invalid QOS provider-specific buffer.";
		break;
	case 0x2b0b:
		return "An invalid QOS filter style was used.";
		break;
	case 0x2b0c:
		return "An invalid QOS filter type was used.";
		break;
	case 0x2b0d:
		return "An incorrect number of QOS FILTERSPECs were specified in the FLOWDESCRIPTOR.";
		break;
	case 0x2b0e:
		return "An object with an invalid ObjectLength field was specified in the QOS provider-specific buffer.";
		break;
	case 0x2b0f:
		return "An incorrect number of flow descriptors was specified in the QOS structure.";
		break;
	case 0x2b10:
		return "An unrecognized object was found in the QOS provider-specific buffer.";
		break;
	case 0x2b11:
		return "An invalid policy object was found in the QOS provider-specific buffer.";
		break;
	case 0x2b12:
		return "An invalid QOS flow descriptor was found in the flow descriptor list.";
		break;
	case 0x2b13:
		return "An invalid or inconsistent flowspec was found in the QOS provider-specific buffer.";
		break;
	case 0x2b14:
		return "An invalid FILTERSPEC was found in the QOS provider-specific buffer.";
		break;
	case 0x2b15:
		return "An invalid shape discard mode object was found in the QOS provider-specific buffer.";
		break;
	case 0x2b16:
		return "An invalid shaping rate object was found in the QOS provider-specific buffer.";
		break;
	case 0x2b17:
		return "A reserved policy element was found in the QOS provider-specific buffer.";
		break;
	case 0x32c8:
		return "The specified quick mode policy already exists.";
		break;
	case 0x32c9:
		return "The specified quick mode policy was not found.";
		break;
	case 0x32ca:
		return "The specified quick mode policy is being used.";
		break;
	case 0x32cb:
		return "The specified main mode policy already exists.";
		break;
	case 0x32cc:
		return "The specified main mode policy was not found.";
		break;
	case 0x32cd:
		return "The specified main mode policy is being used.";
		break;
	case 0x32ce:
		return "The specified main mode filter already exists.";
		break;
	case 0x32cf:
		return "The specified main mode filter was not found.";
		break;
	case 0x32d0:
		return "The specified transport mode filter already exists.";
		break;
	case 0x32d1:
		return "The specified transport mode filter does not exist.";
		break;
	case 0x32d2:
		return "The specified main mode authentication list exists.";
		break;
	case 0x32d3:
		return "The specified main mode authentication list was not found.";
		break;
	case 0x32d4:
		return "The specified main mode authentication list is being used.";
		break;
	case 0x32d5:
		return "The specified default main mode policy was not found.";
		break;
	case 0x32d6:
		return "The specified default main mode authentication list was not found.";
		break;
	case 0x32d7:
		return "The specified default quick mode policy was not found.";
		break;
	case 0x32d8:
		return "The specified tunnel mode filter exists.";
		break;
	case 0x32d9:
		return "The specified tunnel mode filter was not found.";
		break;
	case 0x32da:
		return "The main mode filter is pending deletion.";
		break;
	case 0x32db:
		return "The transport filter is pending deletion.";
		break;
	case 0x32dc:
		return "The tunnel filter is pending deletion.";
		break;
	case 0x32dd:
		return "The main mode policy is pending deletion.";
		break;
	case 0x32de:
		return "The main mode authentication bundle is pending deletion.";
		break;
	case 0x32df:
		return "The quick mode policy is pending deletion.";
		break;
	case 0x32e0:
		return "The main mode policy was successfully added, but some of the requested offers are not supported.";
		break;
	case 0x32e1:
		return "The quick mode policy was successfully added, but some of the requested offers are not supported.";
		break;
	case 0x35e8:
		return "Starts the list of frequencies of various IKE Win32 error codes encountered during negotiations.";
		break;
	case 0x35e9:
		return "The IKE authentication credentials are unacceptable.";
		break;
	case 0x35ea:
		return "The IKE security attributes are unacceptable.";
		break;
	case 0x35eb:
		return "The IKE negotiation is in progress.";
		break;
	case 0x35ec:
		return "General processing error.";
		break;
	case 0x35ed:
		return "Negotiation timed out.";
		break;
	case 0x35ee:
		return "The IKE failed to find a valid machine certificate. Contact your network security administrator about installing a valid certificate in the appropriate certificate store.";
		break;
	case 0x35ef:
		return "The IKE security association (SA) was deleted by a peer before it was completely established.";
		break;
	case 0x35f0:
		return "The IKE SA was deleted before it was completely established.";
		break;
	case 0x35f1:
		return "The negotiation request sat in the queue too long.";
		break;
	case 0x35f2:
		return "The negotiation request sat in the queue too long.";
		break;
	case 0x35f3:
		return "The negotiation request sat in the queue too long.";
		break;
	case 0x35f4:
		return "The negotiation request sat in the queue too long.";
		break;
	case 0x35f5:
		return "There was no response from a peer.";
		break;
	case 0x35f6:
		return "The negotiation took too long.";
		break;
	case 0x35f7:
		return "The negotiation took too long.";
		break;
	case 0x35f8:
		return "An unknown error occurred.";
		break;
	case 0x35f9:
		return "The certificate revocation check failed.";
		break;
	case 0x35fa:
		return "Invalid certificate key usage.";
		break;
	case 0x35fb:
		return "Invalid certificate type.";
		break;
	case 0x35fc:
		return "The IKE negotiation failed because the machine certificate used does not have a private key. IPsec certificates require a private key. Contact your network security administrator about a certificate that has a private key.";
		break;
	case 0x35fe:
		return "There was a failure in the Diffie-Hellman computation.";
		break;
	case 0x3600:
		return "Invalid header.";
		break;
	case 0x3601:
		return "No policy configured.";
		break;
	case 0x3602:
		return "Failed to verify signature.";
		break;
	case 0x3603:
		return "Failed to authenticate using Kerberos.";
		break;
	case 0x3604:
		return "The peer's certificate did not have a public key.";
		break;
	case 0x3605:
		return "Error processing the error payload.";
		break;
	case 0x3606:
		return "Error processing the SA payload.";
		break;
	case 0x3607:
		return "Error processing the proposal payload.";
		break;
	case 0x3608:
		return "Error processing the transform payload.";
		break;
	case 0x3609:
		return "Error processing the key exchange payload.";
		break;
	case 0x360a:
		return "Error processing the ID payload.";
		break;
	case 0x360b:
		return "Error processing the certification payload.";
		break;
	case 0x360c:
		return "Error processing the certificate request payload.";
		break;
	case 0x360d:
		return "Error processing the hash payload.";
		break;
	case 0x360e:
		return "Error processing the signature payload.";
		break;
	case 0x360f:
		return "Error processing the nonce payload.";
		break;
	case 0x3610:
		return "Error processing the notify payload.";
		break;
	case 0x3611:
		return "Error processing the delete payload.";
		break;
	case 0x3612:
		return "Error processing the VendorId payload.";
		break;
	case 0x3613:
		return "Invalid payload received.";
		break;
	case 0x3614:
		return "Soft SA loaded.";
		break;
	case 0x3615:
		return "Soft SA torn down.";
		break;
	case 0x3616:
		return "Invalid cookie received.";
		break;
	case 0x3617:
		return "Peer failed to send valid machine certificate.";
		break;
	case 0x3618:
		return "Certification revocation check of peer's certificate failed.";
		break;
	case 0x3619:
		return "New policy invalidated SAs formed with the old policy.";
		break;
	case 0x361a:
		return "There is no available main mode IKE policy.";
		break;
	case 0x361b:
		return "Failed to enabled trusted computer base (TCB) privilege.";
		break;
	case 0x361c:
		return "Failed to load SECURITY.DLL.";
		break;
	case 0x361d:
		return "Failed to obtain the security function table dispatch address from the SSPI.";
		break;
	case 0x361e:
		return "Failed to query the Kerberos package to obtain the max token size.";
		break;
	case 0x361f:
		return "Failed to obtain the Kerberos server credentials for the Internet Security Association and Key Management Protocol (ISAKMP)/ERROR_IPSEC_IKE service. Kerberos authentication will not function. The most likely reason for this is lack of domain membership. This is normal if your computer is a member of a workgroup.";
		break;
	case 0x3620:
		return "Failed to determine the SSPI principal name for ISAKMP/ERROR_IPSEC_IKE service (QueryCredentialsAttributes).";
		break;
	case 0x3621:
		return "Failed to obtain a new service provider interface (SPI) for the inbound SA from the IPsec driver. The most common cause for this is that the driver does not have the correct filter. Check your policy to verify the filters.";
		break;
	case 0x3622:
		return "Given filter is invalid.";
		break;
	case 0x3623:
		return "Memory allocation failed.";
		break;
	case 0x3624:
		return "Failed to add an SA to the IPSec driver. The most common cause for this is if the IKE negotiation took too long to complete. If the problem persists, reduce the load on the faulting machine.";
		break;
	case 0x3625:
		return "Invalid policy.";
		break;
	case 0x3626:
		return "Invalid digital object identifier (DOI).";
		break;
	case 0x3627:
		return "Invalid situation.";
		break;
	case 0x3628:
		return "Diffie-Hellman failure.";
		break;
	case 0x3629:
		return "Invalid Diffie-Hellman group.";
		break;
	case 0x362a:
		return "Error encrypting payload.";
		break;
	case 0x362b:
		return "Error decrypting payload.";
		break;
	case 0x362c:
		return "Policy match error.";
		break;
	case 0x362d:
		return "Unsupported ID.";
		break;
	case 0x362e:
		return "Hash verification failed.";
		break;
	case 0x362f:
		return "Invalid hash algorithm.";
		break;
	case 0x3630:
		return "Invalid hash size.";
		break;
	case 0x3631:
		return "Invalid encryption algorithm.";
		break;
	case 0x3632:
		return "Invalid authentication algorithm.";
		break;
	case 0x3633:
		return "Invalid certificate signature.";
		break;
	case 0x3634:
		return "Load failed.";
		break;
	case 0x3635:
		return "Deleted by using an RPC call.";
		break;
	case 0x3636:
		return "A temporary state was created to perform reinitialization. This is not a real failure.";
		break;
	case 0x3637:
		return "The lifetime value received in the Responder Lifetime Notify is below the Windows 2000 configured minimum value. Fix the policy on the peer machine.";
		break;
	case 0x3639:
		return "Key length in the certificate is too small for configured security requirements.";
		break;
	case 0x363a:
		return "Maximum number of established MM SAs to peer exceeded.";
		break;
	case 0x363b:
		return "The IKE received a policy that disables negotiation.";
		break;
	case 0x363c:
		return "Reached maximum quick mode limit for the main mode. New main mode will be started.";
		break;
	case 0x363d:
		return "Main mode SA lifetime expired or the peer sent a main mode delete.";
		break;
	case 0x363e:
		return "Main mode SA assumed to be invalid because peer stopped responding.";
		break;
	case 0x363f:
		return "Certificate does not chain to a trusted root in IPsec policy.";
		break;
	case 0x3640:
		return "Received unexpected message ID.";
		break;
	case 0x3641:
		return "Received invalid AuthIP user mode attributes.";
		break;
	case 0x3642:
		return "Sent DOS cookie notify to initiator.";
		break;
	case 0x3643:
		return "The IKE service is shutting down.";
		break;
	case 0x3644:
		return "Could not verify the binding between the color graphics adapter (CGA) address and the certificate.";
		break;
	case 0x3645:
		return "Error processing the NatOA payload.";
		break;
	case 0x3646:
		return "The parameters of the main mode are invalid for this quick mode.";
		break;
	case 0x3647:
		return "The quick mode SA was expired by the IPsec driver.";
		break;
	case 0x3648:
		return "Too many dynamically added IKEEXT filters were detected.";
		break;
	case 0x3649:
		return "Ends the list of frequencies of various IKE Win32 error codes encountered during negotiations.";
		break;
	case 0x36b0:
		return "The requested section was not present in the activation context.";
		break;
	case 0x36b1:
		return "The application has failed to start because its side-by-side configuration is incorrect. See the application event log for more detail.";
		break;
	case 0x36b2:
		return "The application binding data format is invalid.";
		break;
	case 0x36b3:
		return "The referenced assembly is not installed on your system.";
		break;
	case 0x36b4:
		return "The manifest file does not begin with the required tag and format information.";
		break;
	case 0x36b5:
		return "The manifest file contains one or more syntax errors.";
		break;
	case 0x36b6:
		return "The application attempted to activate a disabled activation context.";
		break;
	case 0x36b7:
		return "The requested lookup key was not found in any active activation context.";
		break;
	case 0x36b8:
		return "A component version required by the application conflicts with another active component version.";
		break;
	case 0x36b9:
		return "The type requested activation context section does not match the query API used.";
		break;
	case 0x36ba:
		return "Lack of system resources has required isolated activation to be disabled for the current thread of execution.";
		break;
	case 0x36bb:
		return "An attempt to set the process default activation context failed because the process default activation context was already set.";
		break;
	case 0x36bc:
		return "The encoding group identifier specified is not recognized.";
		break;
	case 0x36bd:
		return "The encoding requested is not recognized.";
		break;
	case 0x36be:
		return "The manifest contains a reference to an invalid URI.";
		break;
	case 0x36bf:
		return "The application manifest contains a reference to a dependent assembly that is not installed.";
		break;
	case 0x36c0:
		return "The manifest for an assembly used by the application has a reference to a dependent assembly that is not installed.";
		break;
	case 0x36c1:
		return "The manifest contains an attribute for the assembly identity that is not valid.";
		break;
	case 0x36c2:
		return "The manifest is missing the required default namespace specification on the assembly element.";
		break;
	case 0x36c3:
		return "The manifest has a default namespace specified on the assembly element but its value is not urn:schemas-microsoft-com:asm.v1\".\"";
		break;
	case 0x36c4:
		return "The private manifest probed has crossed the reparse-point-associated path.";
		break;
	case 0x36c5:
		return "Two or more components referenced directly or indirectly by the application manifest have files by the same name.";
		break;
	case 0x36c6:
		return "Two or more components referenced directly or indirectly by the application manifest have window classes with the same name.";
		break;
	case 0x36c7:
		return "Two or more components referenced directly or indirectly by the application manifest have the same COM server CLSIDs.";
		break;
	case 0x36c8:
		return "Two or more components referenced directly or indirectly by the application manifest have proxies for the same COM interface IIDs.";
		break;
	case 0x36c9:
		return "Two or more components referenced directly or indirectly by the application manifest have the same COM type library TLBIDs.";
		break;
	case 0x36ca:
		return "Two or more components referenced directly or indirectly by the application manifest have the same COM ProgIDs.";
		break;
	case 0x36cb:
		return "Two or more components referenced directly or indirectly by the application manifest are different versions of the same component, which is not permitted.";
		break;
	case 0x36cc:
		return "A component's file does not match the verification information present in the component manifest.";
		break;
	case 0x36cd:
		return "The policy manifest contains one or more syntax errors.";
		break;
	case 0x36ce:
		return "Manifest Parse Error: A string literal was expected, but no opening quotation mark was found.";
		break;
	case 0x36cf:
		return "Manifest Parse Error: Incorrect syntax was used in a comment.";
		break;
	case 0x36d0:
		return "Manifest Parse Error: A name started with an invalid character.";
		break;
	case 0x36d1:
		return "Manifest Parse Error: A name contained an invalid character.";
		break;
	case 0x36d2:
		return "Manifest Parse Error: A string literal contained an invalid character.";
		break;
	case 0x36d3:
		return "Manifest Parse Error: Invalid syntax for an XML declaration.";
		break;
	case 0x36d4:
		return "Manifest Parse Error: An Invalid character was found in text content.";
		break;
	case 0x36d5:
		return "Manifest Parse Error: Required white space was missing.";
		break;
	case 0x36d6:
		return "Manifest Parse Error: The angle bracket (>) character was expected.";
		break;
	case 0x36d7:
		return "Manifest Parse Error: A semicolon (;) was expected.";
		break;
	case 0x36d8:
		return "Manifest Parse Error: Unbalanced parentheses.";
		break;
	case 0x36d9:
		return "Manifest Parse Error: Internal error.";
		break;
	case 0x36da:
		return "Manifest Parse Error: Whitespace is not allowed at this location.";
		break;
	case 0x36db:
		return "Manifest Parse Error: End of file reached in invalid state for current encoding.";
		break;
	case 0x36dc:
		return "Manifest Parse Error: Missing parenthesis.";
		break;
	case 0x36dd:
		return "Manifest Parse Error: A single (') or double (\") quotation mark is missing.";
		break;
	case 0x36de:
		return "Manifest Parse Error: Multiple colons are not allowed in a name.";
		break;
	case 0x36df:
		return "Manifest Parse Error: Invalid character for decimal digit.";
		break;
	case 0x36e0:
		return "Manifest Parse Error: Invalid character for hexadecimal digit.";
		break;
	case 0x36e1:
		return "Manifest Parse Error: Invalid Unicode character value for this platform.";
		break;
	case 0x36e2:
		return "Manifest Parse Error: Expecting whitespace or question mark (?).";
		break;
	case 0x36e3:
		return "Manifest Parse Error: End tag was not expected at this location.";
		break;
	case 0x36e4:
		return "Manifest Parse Error: The following tags were not closed: %1.";
		break;
	case 0x36e5:
		return "Manifest Parse Error: Duplicate attribute.";
		break;
	case 0x36e6:
		return "Manifest Parse Error: Only one top-level element is allowed in an XML document.";
		break;
	case 0x36e7:
		return "Manifest Parse Error: Invalid at the top level of the document.";
		break;
	case 0x36e8:
		return "Manifest Parse Error: Invalid XML declaration.";
		break;
	case 0x36e9:
		return "Manifest Parse Error: XML document must have a top-level element.";
		break;
	case 0x36ea:
		return "Manifest Parse Error: Unexpected end of file.";
		break;
	case 0x36eb:
		return "Manifest Parse Error: Parameter entities cannot be used inside markup declarations in an internal subset.";
		break;
	case 0x36ec:
		return "Manifest Parse Error: Element was not closed.";
		break;
	case 0x36ed:
		return "Manifest Parse Error: End element was missing the angle bracket (>) character.";
		break;
	case 0x36ee:
		return "Manifest Parse Error: A string literal was not closed.";
		break;
	case 0x36ef:
		return "Manifest Parse Error: A comment was not closed.";
		break;
	case 0x36f0:
		return "Manifest Parse Error: A declaration was not closed.";
		break;
	case 0x36f1:
		return "Manifest Parse Error: A CDATA section was not closed.";
		break;
	case 0x36f2:
		return "Manifest Parse Error: The namespace prefix is not allowed to start with the reserved string xml\".\"";
		break;
	case 0x36f3:
		return "Manifest Parse Error: System does not support the specified encoding.";
		break;
	case 0x36f4:
		return "Manifest Parse Error: Switch from current encoding to specified encoding not supported.";
		break;
	case 0x36f5:
		return "Manifest Parse Error: The name \"xml\" is reserved and must be lowercase.";
		break;
	case 0x36f6:
		return "Manifest Parse Error: The stand-alone attribute must have the value \"yes\" or \"no\".";
		break;
	case 0x36f7:
		return "Manifest Parse Error: The stand-alone attribute cannot be used in external entities.";
		break;
	case 0x36f8:
		return "Manifest Parse Error: Invalid version number.";
		break;
	case 0x36f9:
		return "Manifest Parse Error: Missing equal sign (=) between the attribute and the attribute value.";
		break;
	case 0x36fa:
		return "Assembly Protection Error: Unable to recover the specified assembly.";
		break;
	case 0x36fb:
		return "Assembly Protection Error: The public key for an assembly was too short to be allowed.";
		break;
	case 0x36fc:
		return "Assembly Protection Error: The catalog for an assembly is not valid, or does not match the assembly's manifest.";
		break;
	case 0x36fd:
		return "An HRESULT could not be translated to a corresponding Win32 error code.";
		break;
	case 0x36fe:
		return "Assembly Protection Error: The catalog for an assembly is missing.";
		break;
	case 0x36ff:
		return "The supplied assembly identity is missing one or more attributes that must be present in this context.";
		break;
	case 0x3700:
		return "The supplied assembly identity has one or more attribute names that contain characters not permitted in XML names.";
		break;
	case 0x3701:
		return "The referenced assembly could not be found.";
		break;
	case 0x3702:
		return "The activation context activation stack for the running thread of execution is corrupt.";
		break;
	case 0x3703:
		return "The application isolation metadata for this process or thread has become corrupt.";
		break;
	case 0x3704:
		return "The activation context being deactivated is not the most recently activated one.";
		break;
	case 0x3705:
		return "The activation context being deactivated is not active for the current thread of execution.";
		break;
	case 0x3706:
		return "The activation context being deactivated has already been deactivated.";
		break;
	case 0x3707:
		return "A component used by the isolation facility has requested to terminate the process.";
		break;
	case 0x3708:
		return "A kernel mode component is releasing a reference on an activation context.";
		break;
	case 0x3709:
		return "The activation context of the system default assembly could not be generated.";
		break;
	case 0x370a:
		return "The value of an attribute in an identity is not within the legal range.";
		break;
	case 0x370b:
		return "The name of an attribute in an identity is not within the legal range.";
		break;
	case 0x370c:
		return "An identity contains two definitions for the same attribute.";
		break;
	case 0x370d:
		return "The identity string is malformed. This might be due to a trailing comma, more than two unnamed attributes, a missing attribute name, or a missing attribute value.";
		break;
	case 0x370e:
		return "A string containing localized substitutable content was malformed. Either a dollar sign ($) was followed by something other than a left parenthesis or another dollar sign, or a substitution's right parenthesis was not found.";
		break;
	case 0x370f:
		return "The public key token does not correspond to the public key specified.";
		break;
	case 0x3710:
		return "A substitution string had no mapping.";
		break;
	case 0x3711:
		return "The component must be locked before making the request.";
		break;
	case 0x3712:
		return "The component store has been corrupted.";
		break;
	case 0x3713:
		return "An advanced installer failed during setup or servicing.";
		break;
	case 0x3714:
		return "The character encoding in the XML declaration did not match the encoding used in the document.";
		break;
	case 0x3715:
		return "The identities of the manifests are identical, but the contents are different.";
		break;
	case 0x3716:
		return "The component identities are different.";
		break;
	case 0x3717:
		return "The assembly is not a deployment.";
		break;
	case 0x3718:
		return "The file is not a part of the assembly.";
		break;
	case 0x3719:
		return "The size of the manifest exceeds the maximum allowed.";
		break;
	case 0x371a:
		return "The setting is not registered.";
		break;
	case 0x371b:
		return "One or more required members of the transaction are not present.";
		break;
	case 0x3a98:
		return "The specified channel path is invalid.";
		break;
	case 0x3a99:
		return "The specified query is invalid.";
		break;
	case 0x3a9a:
		return "The publisher metadata cannot be found in the resource.";
		break;
	case 0x3a9b:
		return "The template for an event definition cannot be found in the resource (error = %1).";
		break;
	case 0x3a9c:
		return "The specified publisher name is invalid.";
		break;
	case 0x3a9d:
		return "The event data raised by the publisher is not compatible with the event template definition in the publisher's manifest.";
		break;
	case 0x3a9f:
		return "The specified channel could not be found. Check channel configuration.";
		break;
	case 0x3aa0:
		return "The specified XML text was not well-formed. See extended error for more details.";
		break;
	case 0x3aa1:
		return "The caller is trying to subscribe to a direct channel which is not allowed. The events for a direct channel go directly to a log file and cannot be subscribed to.";
		break;
	case 0x3aa2:
		return "Configuration error.";
		break;
	case 0x3aa3:
		return "The query result is stale or invalid. This might be due to the log being cleared or rolling over after the query result was created. Users should handle this code by releasing the query result object and reissuing the query.";
		break;
	case 0x3aa4:
		return "Query result is currently at an invalid position.";
		break;
	case 0x3aa5:
		return "Registered Microsoft XML (MSXML) does not support validation.";
		break;
	case 0x3aa6:
		return "An expression can only be followed by a change-of-scope operation if it itself evaluates to a node set and is not already part of some other change-of-scope operation.";
		break;
	case 0x3aa7:
		return "Cannot perform a step operation from a term that does not represent an element set.";
		break;
	case 0x3aa8:
		return "Left side arguments to binary operators must be either attributes, nodes, or variables and right side arguments must be constants.";
		break;
	case 0x3aa9:
		return "A step operation must involve either a node test or, in the case of a predicate, an algebraic expression against which to test each node in the node set identified by the preceding node set can be evaluated.";
		break;
	case 0x3aaa:
		return "This data type is currently unsupported.";
		break;
	case 0x3aab:
		return "A syntax error occurred at position %1!d!";
		break;
	case 0x3aac:
		return "This operator is unsupported by this implementation of the filter.";
		break;
	case 0x3aad:
		return "The token encountered was unexpected.";
		break;
	case 0x3aae:
		return "The requested operation cannot be performed over an enabled direct channel. The channel must first be disabled before performing the requested operation.";
		break;
	case 0x3aaf:
		return "Channel property %1!s! contains an invalid value. The value has an invalid type, is outside the valid range, cannot be updated, or is not supported by this type of channel.";
		break;
	case 0x3ab0:
		return "Publisher property %1!s! contains an invalid value. The value has an invalid type, is outside the valid range, cannot be updated, or is not supported by this type of publisher.";
		break;
	case 0x3ab1:
		return "The channel fails to activate.";
		break;
	case 0x3ab2:
		return "The xpath expression exceeded supported complexity. Simplify it or split it into two or more simple expressions.";
		break;
	case 0x3ab3:
		return "The message resource is present but the message is not found in the string or message table.";
		break;
	case 0x3ab4:
		return "The message ID for the desired message could not be found.";
		break;
	case 0x3ab5:
		return "The substitution string for the insert index (%1) could not be found.";
		break;
	case 0x3ab6:
		return "The description string for the parameter reference (%1) could not be found.";
		break;
	case 0x3ab7:
		return "The maximum number of replacements has been reached.";
		break;
	case 0x3ab8:
		return "The event definition could not be found for the event ID (%1).";
		break;
	case 0x3ab9:
		return "The locale-specific resource for the desired message is not present.";
		break;
	case 0x3aba:
		return "The resource is too old to be compatible.";
		break;
	case 0x3abb:
		return "The resource is too new to be compatible.";
		break;
	case 0x3abc:
		return "The channel at index %1 of the query cannot be opened.";
		break;
	case 0x3abd:
		return "The publisher has been disabled and its resource is not available. This usually occurs when the publisher is in the process of being uninstalled or upgraded.";
		break;
	case 0x3ae8:
		return "The subscription fails to activate.";
		break;
	case 0x3ae9:
		return "The log of the subscription is in a disabled state and events cannot be forwarded to it. The log must first be enabled before the subscription can be activated.";
		break;
	case 0x3afc:
		return "The resource loader failed to find the Multilingual User Interface (MUI) file.";
		break;
	case 0x3afd:
		return "The resource loader failed to load the MUI file because the file failed to pass validation.";
		break;
	case 0x3afe:
		return "The release candidate (RC) manifest is corrupted with garbage data, is an unsupported version, or is missing a required item.";
		break;
	case 0x3aff:
		return "The RC manifest has an invalid culture name.";
		break;
	case 0x3b00:
		return "The RC Manifest has an invalid ultimate fallback name.";
		break;
	case 0x3b01:
		return "The resource loader cache does not have a loaded MUI entry.";
		break;
	case 0x3b02:
		return "The user stopped resource enumeration.";
		break;
	case 0x3b03:
		return "User interface language installation failed.";
		break;
	case 0x3b04:
		return "Locale installation failed.";
		break;
	case 0x3b60:
		return "The monitor returned a DDC/CI capabilities string that did not comply with the ACCESS.bus 3.0, DDC/CI 1.1, or MCCS 2 Revision 1 specification.";
		break;
	case 0x3b61:
		return "The monitor's VCP version (0xDF) VCP code returned an invalid version value.";
		break;
	case 0x3b62:
		return "The monitor does not comply with the MCCS specification it claims to support.";
		break;
	case 0x3b63:
		return "The MCCS version in a monitor's mccs_ver capability does not match the MCCS version the monitor reports when the VCP version (0xDF) VCP code is used.";
		break;
	case 0x3b64:
		return "The monitor configuration API works only with monitors that support the MCCS 1.0, MCCS 2.0, or MCCS 2.0 Revision 1 specifications.";
		break;
	case 0x3b65:
		return "An internal monitor configuration API error occurred.";
		break;
	case 0x3b66:
		return "The monitor returned an invalid monitor technology type. CRT, plasma, and LCD (TFT) are examples of monitor technology types. This error implies that the monitor violated the MCCS 2.0 or MCCS 2.0 Revision 1 specification.";
		break;
	case 0x3b67:
		return "The SetMonitorColorTemperature() caller passed a color temperature to it that the current monitor did not support. CRT, plasma, and LCD (TFT) are examples of monitor technology types. This error implies that the monitor violated the MCCS 2.0 or MCCS 2.0 Revision 1 specification.";
		break;
	case 0x3b92:
		return "The requested system device cannot be identified due to multiple indistinguishable devices potentially matching the identification criteria.";
		break;
	case 0x3bc3:
		return "The requested system device cannot be found.";
		break;
